#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

ll dp[105][25];

int main() {
    ll N;
    cin >> N;
    vec<ll> a(N);
    rep(i, N) cin >> a[i]; 

    dp[0][0] = 1;

    for (ll i = 0; i < N - 1; ++i) {
        for (ll j = 0; j <= 20; ++j) {
            if (dp[i][j] != 0) {
                if (j + a[i] <= 20) dp[i + 1][j + a[i]] += dp[i][j];
                if (j - a[i] >= 0 && !(i == 0 && a[i] == 0))
                    dp[i + 1][j - a[i]] += dp[i][j];
            }
        }
    }

    cout << dp[N - 1][a[N - 1]] << endl;
}
