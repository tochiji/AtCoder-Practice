#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    ll N, M;
    cin >> N >> M;
    ll bitN = pow(2, N);
    vector<ll> dp(bitN, 100000000000);

    rep(_, M) {
        string S;
        ll C;
        cin >> S >> C;

        ll b = 0;
        rep(i, S.size()) {
            if (S[i] == 'Y') b |= (1 << i);
        }
        dp[b] = min(dp[b], C);

        rep(i, bitN) {
            dp[b | i] = min(dp[b | i], dp[b] + dp[i]);
        }
    }
    if (dp[bitN - 1] != 100000000000) {
        cout << dp[bitN - 1] << endl;
    } else {
        cout << -1 << endl;
    }
}
