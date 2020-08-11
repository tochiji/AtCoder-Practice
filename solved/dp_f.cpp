#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    string s;
    string t;
    cin >> s >> t;
    vec<vec<int>> dp(s.size() + 1, vec<int>(t.size() + 1, 0));
    for (int i = 1; i <= s.size(); ++i)
        for (int j = 1; j <= t.size(); ++j) {
            dp[i][j] = max({dp[i - 1][j - 1], dp[i][j - 1], dp[i - 1][j]});
            if (s[i - 1] == t[j - 1])
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
        }

    string ans = "";
    int i      = s.size();
    int j      = t.size();
    while (i >= 1 && j >= 1) {
        int a = dp[i - 1][j - 1];
        int b = dp[i][j - 1];
        int c = dp[i - 1][j];
        if (a == b && a == c && a == dp[i][j] -1) {
            ans = ans + s[i-1];
            --i, --j;
        } else if(a == b && a == c){
            --i,--j;
        } else if(b > c){
            --j;
        } else {
            --i;
        }
    }

    reverse(all(ans));
    cout << ans << '\n';
}

//   jabyxb
// i 000000                                                        <
// a 011111                                                        <
// x 011122                                                        <
// y 011222                                                        <
// b 012223   
