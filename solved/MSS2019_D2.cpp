#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int dp[30009][4][1009];

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    dp[0][0][0] = 1;

    rep(p,N)rep(len,4)rep(c,1000){
      if(dp[p][len][c] != 1)continue;
      int s           = S[p] - '0';
      dp[p+1][len][c] = dp[p][len][c];
      if(len<=2){
        dp[p+1][len+1][c*10+s] = 1;
      }
    }

    int ans = 0;
    rep(i,1000) ans += dp[N][3][i];
    cout << ans << endl;
}