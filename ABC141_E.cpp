#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    vector<vector<int>> dp(N + 1, vector<int>(N + 1, 0));

    for (int i = N - 1; i >= 0; i--)
        for (int j = N - 1; j >= 0; j--) {
            if (S[i] == S[j]) dp[i][j] = dp[i + 1][j + 1] + 1;
        }

    int ans = 0;
    rep(i, N) rep(j, N) {
        int n = dp[i][j];
        if (j - n >= i) {
            ans = max(ans, n);
        }
    }
    cout << ans << endl;
}