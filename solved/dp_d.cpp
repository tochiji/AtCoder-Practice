#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    ll N, W;
    cin >> N >> W;

    vec<ll> w(N), v(N);
    rep(i, N) cin >> w[i] >> v[i];

    vec<vec<ll>> dp(N + 1, vec<ll>(W + 1, 0));
    dp[0][0] = 0;
    for (ll i = 1; i <= N; ++i) {
        for (ll x = 0; x <= W; ++x) {
            dp[i][x] = max({dp[i][x], dp[i - 1][x]});
            if (x > 0) dp[i][x] = max({dp[i][x], dp[i][x - 1]});
            if (x + w[i - 1] <= W) {
                dp[i][x + w[i - 1]] =
                    max({dp[i][x + w[i - 1]], dp[i - 1][x] + v[i - 1]});
            }
        }
    }

    cout << dp[N][W] << endl;
}
