#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;
ll MOD = 1e9 + 7;

int main() {
    string S;
    cin >> S;
    vector<vector<ll>> dp(S.size() + 1, vector<ll>(13, 0));
    dp[0][0] = 1;

    int ketaMod = 1;
    for (int i = S.size() - 1; i >= 0; i--) {
        int keta = S.size() - i;

        if (S[i] == '?') {
            for (int ki = 0; ki <= 12; ki++) {
                for (int k = 0; k <= 9; k++) {
                    dp[keta][(k * ketaMod + ki) % 13] += dp[keta - 1][ki];
                    dp[keta][(k * ketaMod + ki) % 13] %= MOD;
                }
            }
        }

        else {
            int N = S[i] - '0';
            for (int ki = 0; ki <= 12; ki++) {
                dp[keta][(N * ketaMod + ki) % 13] += dp[keta - 1][ki];
                dp[keta][(N * ketaMod + ki) % 13] %= MOD;
            }
        }
        ketaMod *= 10;
        ketaMod %= 13;
    }
    cout << dp[S.size()][5] << endl;
}