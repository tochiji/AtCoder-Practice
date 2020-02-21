#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int N, W;
    cin >> N >> W;
    vector<int> w(N);
    vector<int> v(N);
    rep(i, N) cin >> w[i] >> v[i];
    vector<vector<int>> dp(N + 1, vector<int>(100001, 1e9+1));
    rep(i, N + 1) dp[i][0] = 0;

    for (int i = 1; i <= N; i++) {
        int vv = v[i - 1];
        int ww = w[i - 1];
        rep(vi, 100001) {
            if (vi <= vv) {
                dp[i][vi] = min(dp[i - 1][vi], ww);
            } else {
                int before = vi - vv;
                dp[i][vi]  = min(dp[i - 1][vi], dp[i - 1][before] + ww);
            }
        }
    }

    for (int i = 100000; i >= 0; i--) {
        if (dp[N][i] <= W) {
            cout << i << endl;
            return 0;
        }
    }
}