#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N, W;
    cin >> N >> W;
    vector<int> weight(N);
    vector<int> value(N);
    rep(i, N) cin >> weight[i] >> value[i];
    vector<vector<ll>> dp(N + 1, vector<ll>(100001, 0));

    rep(n, N + 1) rep(v, 100001) {
        if (n == 0 || v == 0) {
            dp[n][v] = 0;
            continue;
        }

        int wei = weight[n - 1];
        int val = value[n - 1];
        dp[n][v] =
            max(dp[n - 1][v], (v - val < 0 ? 0 : dp[n - 1][v - val] + wei));
    }

    rep(n, 35) {
        printf("dp[N][%d] = %lld\n", n, dp[N][n]);
    }

    int ans = 0;
    ll val  = 0;
    rep(i, 100001) {
        if (dp[N][i] > W) break;
        if (dp[N][i] != val) {
            val = max(dp[N][i], val);
            ans = i;
        }
    }
    cout << ans << endl;
}