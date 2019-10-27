#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;
ll mod = 1e9 + 7;

int main() {
    string S;
    cin >> S;
    int N = S.size();

    vector<vector<int>> next(N + 1, vector<int>(26, N));
    for(int i = N-1;i>=0;i--){
        for(int j=0;j<26;j++) next[i][j] = next[i+1][j];
        next[i][S[i]-'a'] = i;
    }

    vector<int> dp(N+1);
    dp[0] = 1;
    for(int i=0;i<=N;i++){
        for(int j=0;j<26;j++) {
            if(next[i][j] >= N) continue;
            dp[next[i][j]+1] += dp[i];
        }
    }

    int ans = 0;
    rep(i,N+1) ans += dp[i];
    cout << ans << endl;
}