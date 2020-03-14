#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

#define debug(x) cout << #x << "=" << x << endl;
#define vdebug(v) { cout << #v << "=" << endl; rep(i_debug, v.size()) { cout << v[i_debug] << ",";}cout << endl; }
#define mdebug(m) { cout << #m << "=" << endl; rep(i_debug, m.size()) { rep(j_debug, m[i_debug].size()) { cout << m[i_debug][j_debug] << ","; } cout << endl; } }

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> a(M);
    vector<int> c(M);
    rep(i, M) {
        cin >> a[i];
        int b;
        cin >> b;
        int keys = 0;
        rep(j, b) {
            int c;
            cin >> c;
            --c;
            keys |= (1 << c);
        }
        c[i] = keys;
    }

    vector<vector<int>> dp(M + 1, vector<int>((int)pow(2, N), (int)1e9));
    dp[0][0] = 0;
    for (int m = 1; m <= M; m++) {
        int key    = c[m - 1];
        int cost   = a[m - 1];
        rep(i, pow(2, N)) {
            dp[m][i] = min(dp[m][i],dp[m-1][i]);
            dp[m][i | key] = min(dp[m][i | key], dp[m - 1][i] + cost);
        }
    }

    if (dp[M][pow(2, N) - 1] == (int)1e9) {
        cout << -1 << endl;
    } else {
        cout << dp[M][pow(2, N) - 1] << endl;
    }
}