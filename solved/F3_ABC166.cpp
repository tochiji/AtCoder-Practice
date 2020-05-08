#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int N, A, B, C;
vec<string> s;
char ans[(int)1e5 + 5];

void dfs(int now, int a, int b, int c) {
    if (now == N) {
        cout << "Yes" << endl;
        rep(i,N)
            cout << ans[i] << endl;
        exit(0);
    }
    if (s[now] == "AB") {
        if (a != 0) ans[now] = 'B', dfs(now + 1, a - 1, b + 1, c);
        if (b != 0) ans[now] = 'A', dfs(now + 1, a + 1, b - 1, c);
    }
    if (s[now] == "AC") {
        if (a != 0) ans[now] = 'C', dfs(now + 1, a - 1, b, c + 1);
        if (c != 0) ans[now] = 'A', dfs(now + 1, a + 1, b, c - 1);
    }
    if (s[now] == "BC") {
        if (b != 0) ans[now] = 'C', dfs(now + 1, a, b - 1, c + 1);
        if (c != 0) ans[now] = 'B', dfs(now + 1, a, b + 1, c - 1);
    }
}

int main() {
    cin >> N >> A >> B >> C;
    s.resize(N);
    rep(i, N) cin >> s[i];
    dfs(0, A, B, C);
    cout << "No" << endl;
}