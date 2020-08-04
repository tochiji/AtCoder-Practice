#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N, W;
    cin >> N >> W;

    vec<ll> w(N), v(N);
    rep(i, N) cin >> w[i] >> v[i];

    vec<vec<ll>> dp(N + 1, vec<ll>(W + 1, 0));

    for (int i = 1; i <= N; ++i) {
        dp[i][w[i-1]] = max(dp[i][w[i-1]],v[i-1]);

        for (int j = 0; j <= W; ++j) {
            dp[i][j] = max({dp[i][j],dp[i - 1][j], dp[i][max(j - 1, 0)]});
            if (j + w[i - 1] <= W)
                dp[i][j + w[i - 1]] =
                    max(dp[i][j + w[i - 1]], dp[i-1][j] + v[i - 1]);
        }
    }

    ll ans = 0;
    rep(i,W+1) ans = max(ans, dp[N][i]);
    cout << ans << endl;
}
