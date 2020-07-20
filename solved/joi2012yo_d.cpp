#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

ll dp[105][5][5];

int main() {
    int N, K;
    cin >> N >> K;
    vec<int> A(N, -1);
    rep(i, K) {
        int a, b;
        cin >> a >> b;
        --a;
        A[a] = b;
    }

    dp[0][0][0] = 1;

    for (int i = 1; i <= N; ++i)
        for (int j = 0; j <= 3; ++j)
            for (int k = 0; k <= 3; ++k) {
                if (A[i - 1] == -1) {
                    if (!(j == 1 && k == 1)) dp[i][1][j] += dp[i - 1][j][k];
                    if (!(j == 2 && k == 2)) dp[i][2][j] += dp[i - 1][j][k];
                    if (!(j == 3 && k == 3)) dp[i][3][j] += dp[i - 1][j][k];
                } else {
                    if (!(j == A[i - 1] && k == A[i - 1])){
                        dp[i][A[i - 1]][j] += dp[i - 1][j][k];
                    }
                }
                dp[i][1][j] %= 10000;
                dp[i][2][j] %= 10000;
                dp[i][3][j] %= 10000;
            }

    ll ans = 0;
    for (int i = 0; i <= 3; ++i)
        for (int j = 0; j <= 3; ++j) {
            ans += dp[N][i][j];
            ans %= 10000;
        }
    cout << ans << endl;
}
