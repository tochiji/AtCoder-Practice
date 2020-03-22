#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int H,W;
    cin >> H>>W;
    vector<string> s(H);
    rep(i,H) cin >> s[i];
    vector<vector<int>> dp(H,vector<int>(W,(int)1e9));
    dp[0][0] = (s[0][0] == '#' ? 1 : 0);
    rep(h,H)rep(w,W){
        if(h==0&&w==0) continue;
        if(h != 0)
            dp[h][w] = min(dp[h][w],dp[h-1][w] + ((s[h-1][w] == '.' && s[h][w] == '#') ? 1: 0));
        if(w != 0)
            dp[h][w] = min(dp[h][w],dp[h][w-1] + ((s[h][w-1] == '.' && s[h][w] == '#') ? 1: 0));
    }
    
    cout << dp[H-1][W-1] << endl;
}