#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int S = s.size();
    int T = t.size();
    vector<vector<int>> dp(S + 1, vector<int>(T + 1, 0));
    rep(si, S) rep(ti, T) {
        if (s[si] == t[ti]) {
            dp[si + 1][ti + 1] =
                max({dp[si][ti] + 1, dp[si + 1][ti], dp[si][ti + 1]});
        } else {
            dp[si + 1][ti + 1] = max(dp[si + 1][ti], dp[si][ti + 1]);
        }
    }

    int si     = S;
    int ti     = T;
    string ans = "";
    while (si > 0 && ti > 0) {
        if (dp[si][ti] == dp[si - 1][ti])
            si--;
        else if (dp[si][ti] == dp[si][ti - 1])
            ti--;
        else {
            si--;
            ti--;
            ans = s[si] + ans;
        }
    }
    cout << ans << endl;
}