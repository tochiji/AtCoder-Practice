#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> h(N);
    rep(i, N) cin >> h[i];

    vector<int> dp(N);
    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);

    for (int i = 2; i < N; i++) {
        int back1 = abs(h[i] - h[i - 1]);
        int back2 = abs(h[i] - h[i - 2]);
        dp[i]     = min(dp[i - 1] + back1, dp[i - 2] + back2);
    }
    cout << dp[N-1] << endl;
}