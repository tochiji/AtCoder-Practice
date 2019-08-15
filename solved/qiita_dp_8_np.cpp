// https://qiita.com/drken/items/a5e6fe22863b7992efdb
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const int MOD = 1000000009;
const int MAXIMAM = 2147480000;

int main() {
    string S, T;
    cin >> S >> T;

    vector<vector<int>> dp(S.size() + 1,vector<int>(T.size() + 1));

    for(int s=0;s<S.size();s++){
        for(int t=0;t<=T.size();t++){
            if(S[s] == T[t]) dp[s+1][t+1] = dp[s][t] + 1;
            else dp[s+1][t+1] = max(max(dp[s][t],dp[s+1][t]),dp[s][t+1]);
        }
    }

    rep(s,S.size()+1){
        rep(t,T.size()+1) cout << dp[s][t] << " ";
        cout << endl;
    }

    cout << dp[S.size()][T.size()] << endl;
}