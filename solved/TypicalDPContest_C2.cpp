#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

double rate(int r1, int r2) {
    double r = 1 / (1 + pow(10, (r2 - r1) / 400.0));
    return r;
}

int main() {
    int K;
    cin >> K;
    int N = pow(2, K);
    vector<int> R(N);
    rep(i, N) cin >> R[i];

    double dp[N][K + 1];
    rep(k, K + 1) rep(n, N) {
        if (k == 0) {
            dp[n][k] = 1.0;
            continue;
        }

        double sum = 0.0;
        rep(vs, N) {
            int mask  = 0b1111111111 << k;
            int mask2 = 0b1111111111 << k - 1;
            bool m1   = (n & mask) == (vs & mask);
            bool m2   = (n & mask2) != (vs & mask2);

            if (m1 && m2) {
                sum += dp[vs][k - 1] * rate(R[n], R[vs]);
            }
        }
        dp[n][k] = dp[n][k - 1]*sum;
    }

    cout << fixed << setprecision(9);
    rep(i, N) cout << dp[i][K] << endl;
}