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

    vector<vector<ll>> dp(N + 1, vector<ll>(W + 1));

    rep(n, N + 1) rep(w, W + 1) {
        if (n == 0) {
            dp[n][w] = 0;
            continue;
        }

        int wei = weight[n - 1];
        int val = value[n - 1];
        if (w - wei >= 0) {
            dp[n][w] =
                max({dp[n - 1][w], (ll)dp[n - 1][w - wei] + val, dp[n][w - 1]});
        } else {
          dp[n][w] = max(dp[n-1][w],(w == 0 ? 0 : dp[n][w-1]));
        }
    }

    cout << dp[N][W] << endl;
}