#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;
int INF = 1e9;

int a[2002]   = {};
int sum[2002] = {};
int dp[2002][2002];

int main() {
    int N, K;
    cin >> N >> K;
    rep(i, N) {
        cin >> a[i];
        sum[i + 1] = sum[i] + a[i];
    }

    if (sum[N] == K) {
        cout << 1 << endl;
        return 0;
    }

    rep(i, N + 1) rep(j, N + 1) dp[i][j] = INF;
    dp[0][0]                             = 0;
    dp[1][1]                             = 1;

    rep(i, N) rep(j, i + 1) {
        if (dp[i][j] < INF) {
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);

            if (i == 0) continue;
            ll atleast = (ll)dp[i][j] * sum[i + 1] / sum[i] + 1;
            if (atleast <= a[i] + dp[i][j]) {
                dp[i + 1][j + 1] = min(dp[i + 1][j + 1], (int)atleast);
            }
        }
    }

    for (int i = N; i >= 0; i--) {
        if (dp[N][i] <= K) {
            cout << i << endl;
            return 0;
        }
    }
}