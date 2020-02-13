#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
#define debug(x) cout << #x << "=" << x << endl;
#define vdebug(v) \
    { \
        cout << #v << "=" << endl; \
        rep(i_debug, v.size()) { \
            cout << v[i_debug] << ","; \
        } \
        cout << endl; \
    }
#define mdebug(m) \
    { \
        cout << #m << "=" << endl; \
        rep(i_debug, m.size()) { \
            rep(j_debug, m[i_debug].size()) { \
                cout << m[i_debug][j_debug] << ","; \
            } \
            cout << endl; \
        } \
    }

double dp[305][305][305] = {0.0};

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, N) cin >> a[i];
    dp[0][0][0] = 1;
    rep(k3, N) rep(k2, N) rep(k1, N) {
        int Z = N - k3 - k2 - k1;
        if (Z > 0) dp[k3][k2][k1 + 1] = dp[k3][k2][k1] + Z / N;
        if (k1 + 1 <= N) dp[k3][k2 + 1][k1] = dp[k3][k2][k1 + 1] + (k1 + 1) / N;
        if (k2 + 1 <= N) dp[k3 + 1][k2][k1] = dp[k3][k2 + 1][k1] + (k2 + 1) / N;
    }

    int a1, a2, a3 = 0;
    rep(i, N) {
        if (a[i] == 1)
            a1++;
        else if (a[i] == 2)
            a2++;
        else if (a[i] == 3)
            a3++;
    }
    debug(a1);
    debug(a2);
    debug(a3);
    cout << dp[a3][a2][a1] << endl;
}