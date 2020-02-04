#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int N, W;
    cin >> N >> W;
    vector<pair<ll, ll>> p(N);
    rep(i, N) cin >> p[i].first >> p[i].second;
    vector<vector<ll>> dp(W + 1, vector<ll>(N + 1, 0));
    for (int i = 1; i <= N; i++) {
        ll pw = p[i - 1].first;
        ll pv = p[i - 1].second;
        rep(w, W + 1) {
            if (w < pw) {
                dp[w][i] = dp[w][i - 1];
            } else {
                dp[w][i] = max(dp[w][i - 1], dp[w - pw][i - 1] + pv);
            }
        }
    }
    cout << dp[W][N] << endl;
}