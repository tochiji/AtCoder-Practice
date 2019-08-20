#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;
ll INF = 1e12;

int main() {
    int N, W;
    cin >> N >> W;
    vector<int> w(N);
    vector<int> v(N);
    rep(i, N) cin >> w[i] >> v[i];

    vector<vector<ll>> dp(N + 1, vector<ll>(N * 1000 + 1,INF));

    dp[0][0] = 0;
    rep(i, N) rep(val, N * 1000 + 1) {
        dp[i+1][val] = min(dp[i+1][val],dp[i][val]);
        if(val+v[i] > N*1000) continue;
        dp[i+1][val+v[i]] = min(dp[i+1][val+v[i]],dp[i][val]+w[i]);
    }

    for (int i = N * 1000; i >= 1; i--) {
        if (dp[N][i] <= W) {
            cout << i << endl;
            return 0;
        }
    }
}