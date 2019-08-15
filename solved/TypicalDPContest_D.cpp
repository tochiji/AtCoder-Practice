#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

double dp[102][64][64][64];

int main() {
    int N;
    ll D;
    cin >> N >> D;
    int yakuD2 = 0;
    int yakuD3 = 0;
    int yakuD5 = 0;

    while (D % 2 == 0)
        D /= 2, yakuD2++;
    while (D % 3 == 0)
        D /= 3, yakuD3++;
    while (D % 5 == 0)
        D /= 5, yakuD5++;

    if (D != 1) {
        cout << 0 << endl;
        return 0;
    }

    dp[0][0][0][0] = 1.0;

    rep(n, N + 1) rep(s, yakuD2 + 1) rep(t, yakuD3 + 1) rep(f, yakuD5 + 1) {
        double base = dp[n][s][t][f] / 6.0;
        int sp0     = min(s, yakuD2);
        int sp1     = min(s + 1, yakuD2);
        int sp2     = min(s + 2, yakuD2);
        int tp0     = min(t, yakuD3);
        int tp1     = min(t + 1, yakuD3);
        int fp0     = min(f, yakuD5);
        int fp1     = min(f + 1, yakuD5);

        dp[n + 1][sp0][tp0][fp0] += base;
        dp[n + 1][sp1][tp0][fp0] += base;
        dp[n + 1][sp0][tp1][fp0] += base;
        dp[n + 1][sp2][tp0][fp0] += base;
        dp[n + 1][sp0][tp0][fp1] += base;
        dp[n + 1][sp1][tp1][fp0] += base;
    }

    cout << fixed << setprecision(9);
    cout << dp[N][yakuD2][yakuD3][yakuD5] << endl;
}