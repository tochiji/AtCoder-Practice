#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

const int MAX_N = 1e5;
int dp[MAX_N + 10][4][4];

int main() {
    int N;
    cin >> N;

    vec<int> a(N), b(N), c(N);
    rep(i, N) cin >> a[i] >> b[i] >> c[i];

    vec<vec<int>> dp(N + 10, vec<int>(4, -1e9));
    dp[1][1] = a[0];
    dp[1][2] = b[0];
    dp[1][3] = c[0];

    int ans = max({a[0], b[0], c[0]});
    for (int i = 2; i <= N; ++i)
        rep(o, 4) {
            if (!(o == 1)) dp[i][1] = max(dp[i][1], dp[i - 1][o] + a[i - 1]);
            if (!(o == 2)) dp[i][2] = max(dp[i][2], dp[i - 1][o] + b[i - 1]);
            if (!(o == 3)) dp[i][3] = max(dp[i][3], dp[i - 1][o] + c[i - 1]);

            if (i == N) ans = max({ans, dp[N][1], dp[N][2], dp[N][3]});
        }
    cout << ans << endl;
}
