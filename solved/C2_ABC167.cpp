#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
template <typename T>
using vec = std::vector<T>;

int N, M, X;
int ans = 1e9 + 7;
vec<int> C(12);
vec<vec<int>> A(12, vec<int>(12, 0));

void dfs(int now, int cost, vec<int> Xs) {
    if (now == N) {
        bool flag = true;
        for (auto e : Xs)
            if (e > 0) flag = false;
        if (flag) ans = min(ans, cost);
        return ;
    }

    dfs(now+1, cost, Xs);
    for (int i = 0; i < M; ++i)
        Xs[i] -= A[now][i];
    dfs(now+1, cost + C[now], Xs);
}

int main() {
    cin >> N >> M >> X;

    rep(i, N) {
        cin >> C[i];
        rep(j, M) cin >> A[i][j];
    }

    dfs(0, 0, vec<int>(M, X));
    cout << (ans == (int)1e9 + 7 ? -1 : ans) << endl;
}
