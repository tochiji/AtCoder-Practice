#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

ll dp[100005][14] = {0};

int main() {
    string S;
    cin >> S;

    int N    = S.size();
    dp[0][0] = 1;
    rep(n, N) {
        char sn = S[n];
        if (sn == '?') {
            rep(i2, 13) rep(i, 10) {
                dp[n + 1][(i + i2 * 10) % 13] += dp[n][i2];
                dp[n + 1][(i + i2 * 10) % 13] %= (ll)1e9 + 7;
            }
        } else {
            int sni = sn - '0';
            rep(i2, 13) {
                dp[n + 1][(sni + i2 * 10) % 13] += dp[n][i2];
                dp[n + 1][(sni + i2 * 10) % 13] %= (ll)1e9 + 7;
            }
        }
    }
    cout << dp[N][5] << endl;
}