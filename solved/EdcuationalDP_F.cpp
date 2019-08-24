#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int sN = s.size();
    int tN = t.size();
    vector<vector<int>> dp(sN + 1, vector<int>(tN + 1, 0));

    for (int i = 1; i <= sN; i++)
        for (int j = 1; j <= tN; j++) {
            int isSame = (s[i - 1] == t[j - 1] ? 1 : 0);
            dp[i][j] =
                max({dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1] + isSame});
        }


    string ans = "";
    int i = sN;
    int j = tN;
    while(i>=1 && j>=1){
        if(dp[i][j] == dp[i-1][j]){ //縦が一緒なら下がる
            i--;
        } else if(dp[i][j]== dp[i][j-1]) { //横が一緒なら左に行く
            j--;
        } else { //縦も横も違うなら左上に逃げる。逃げる前に文字を追加する。
            ans = s[i-1] + ans;
            i--;j--;
        }
    }

    cout << ans << endl;
}