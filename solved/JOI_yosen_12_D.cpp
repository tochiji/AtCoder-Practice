#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

/* ほぼ自力でできた。嬉しい*/

struct cloth {
    int A;
    int B;
    int C;
};

//     Day Ncloth
int dp[205][205] = {};

int main() {
    int D, N;
    cin >> D >> N;

    vector<int> T(D + 1);
    rep(i, D) cin >> T[i + 1];

    vector<cloth> c(N + 1);
    rep(i, N) {
        cin >> c[i + 1].A >> c[i + 1].B >> c[i + 1].C;
    }

    for (int d = 1; d <= D; d++)
        for (int n = 1; n <= N; n++) {
            if (d == 1) {
                if (c[n].A <= T[d] && T[d] <= c[n].B) {
                    dp[d][n] = 0;
                    continue;
                }
                else {
                    dp[d][n] = -1;
                    continue;
                }
            }

            if (c[n].A <= T[d] && T[d] <= c[n].B) {
                for (int b = 1; b <= N; b++) {
                    if (dp[d - 1][b] == -1) continue;
                    dp[d][n] =
                        max(dp[d][n], dp[d - 1][b] + abs(c[n].C - c[b].C));
                }
            }
            else {
                dp[d][n] = -1;
            }
        }

    int ans = 0;
    rep(i, N + 1) {
        ans = max(dp[D][i], ans);
    }
    cout << ans << endl;
}