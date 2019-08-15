#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    vector<int> a(A);
    vector<int> b(B);
    rep(i, A) cin >> a[A - i - 1];
    rep(i, B) cin >> b[B - i - 1];
    int dp[A + 1][B + 1];
    rep(i, A + 1) rep(j, B + 1) dp[i][j] = 0;

    dp[0][0] = 0;  // A、Bの残り枚数が0枚のとき、先行の取得できる価値は0点

    rep(a_i, A + 1) rep(b_i, B + 1) {
        if (a_i == 0 && b_i == 0) continue;
        int isSente = !(((A + B) - (a_i + b_i)) & 1);
        if (isSente) {
            if (a_i == 0) {
                dp[a_i][b_i] = dp[a_i][b_i - 1] + b[b_i - 1];
            }
            else if (b_i == 0) {
                dp[a_i][b_i] = dp[a_i - 1][b_i] + a[a_i - 1];
            }
            else {
                dp[a_i][b_i] = max(dp[a_i - 1][b_i] + a[a_i - 1],
                                   dp[a_i][b_i - 1] + b[b_i - 1]);
            }
        }
        else {
            if (a_i == 0) {
                dp[a_i][b_i] = dp[a_i][b_i - 1];
            }
            else if (b_i == 0) {
                dp[a_i][b_i] = dp[a_i - 1][b_i];
            }
            else {
                dp[a_i][b_i] = min(dp[a_i - 1][b_i],
                                   dp[a_i][b_i - 1]);
            }
        }
    }
    cout << dp[A][B] << endl;
}