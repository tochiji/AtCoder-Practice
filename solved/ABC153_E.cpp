#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int H, N;
    cin >> H >> N;
    vector<int> A(N);
    vector<int> B(N);
    rep(i, N) cin >> A[i] >> B[i];
    vector<int> dp(H + 1, 100000007);

    rep(n, N) {
        int a = A[n];
        int b = B[n];
        rep(h, H + 1) {
            int tmpmin = b * ((h + a - 1) / a);
            dp[h]     = min(dp[h], dp[h - a] + b);
            dp[h]     = min(dp[h], tmpmin);
        }
    }
    cout << dp[H] << endl;
}