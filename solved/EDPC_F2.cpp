#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    vector<vector<int>> dp(s.size() + 1, vector<int>(t.size() + 1, 0));

    rep(si, s.size()) rep(ti, t.size()) {
        if (s[si] == t[ti]) {
            dp[si + 1][ti + 1] =
                max({dp[si + 1][ti], dp[si][ti + 1], dp[si][ti] + 1});
        } else {
            dp[si + 1][ti + 1] = max({dp[si + 1][ti], dp[si][ti + 1]});
        }
    }

    string ans = "";
    int si = s.size();
    int ti = t.size();
     while(si>0 && ti >0) {
        if(dp[si][ti] == dp[si-1][ti]) si--;
        else if(dp[si][ti] == dp[si][ti-1]) ti--;
        else {
            ans = s[si-1] + ans;
            si--;ti--;
        }
    }
    cout << ans << endl;
}