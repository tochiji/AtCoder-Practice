#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define r(i, j) for (int i = 1; i <= j; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int N, M, Q;
int A[55], B[55], C[55], D[55];
int ans = 0;

void dfs(vec<int> Z) {
    int size = Z.size();
    if (size == N) {
        int tmpans = 0;
        rep(i, Q) {
            if (Z[B[i]] - Z[A[i]] == C[i]) tmpans += D[i];
        }
        ans = max(ans, tmpans);
        return;
    }

    Z.push_back(Z.back());
    for (int i = Z.back(); i <= M; ++i) {
        Z[size] = i;
        dfs(Z);
    }
}

int main() {
    cin >> N >> M >> Q;

    rep(i, Q) {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
        --A[i];
        --B[i];
    }
    dfs(vec<int>(1, 1));
    cout << ans << endl;
}
