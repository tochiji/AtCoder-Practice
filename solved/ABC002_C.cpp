#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int N, M;
vector<vector<bool>> G;

int main() {
    cin >> N >> M;
    G.resize(N);
    rep(i, N) G[i].resize(N, 0);

    rep(i, M) {
        int from, to;
        cin >> from >> to;
        from--;
        to--;
        G[from][to] = 1;
        G[to][from] = 1;
    }

    rep(i, N) G[i][i] = 1;

    int ans = 0;
    for (int mask = 0; mask < (1 << N); mask++) {
        int len = bitset<12>(mask).count();

        bool flag = true;
        rep(i, N) rep(j, i + 1) {
            if (mask >> j & mask >> i & 1 && !G[j][i]) flag = false;
        }
        if (flag) ans = max(ans, len);
    }

    cout << ans << endl;
}