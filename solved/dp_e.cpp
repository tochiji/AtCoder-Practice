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

    ll MAX_VAL = 10000 * N;
    vec<vec<ll>> dp(N + 1, vec<ll>(MAX_VAL + 100, 1e14 + 5));

    for (int i = 1; i <= N; ++i) {
        dp[i][v[i - 1]] = min(dp[i][v[i - 1]], w[i - 1]);

        for (int j = 0; j <= MAX_VAL; ++j) {
            dp[i][j] = min({dp[i][j], dp[i - 1][j]});

            dp[i][j + v[i - 1]] = min(dp[i][j + v[i - 1]], dp[i-1][j] + w[i - 1]);
        }
    }

    ll ans = 0;

    rep(i, MAX_VAL) if (dp[N][i] <= W) ans = max(ans, i);
    cout << ans << endl;
}
