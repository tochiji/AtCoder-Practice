#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int N,T;
    cin >> N >> T;
    vector<pair<int,int>> A(N);
    rep(i,N){
        int a,b;
        cin >> a >> b;
        A[i] = {a,b};
    }
    sort(all(A));
    vector<vector<int>> dp(N+1,vector<int>(T+1,0));
    for(int i =1;i<=N;i++)for(int t=1;t<=T;t++){
        int a,b;
        a = A[i-1].first;
        b = A[i-1].second;
        if(a>t){
            dp[i][t] = max(dp[i-1][t],dp[i][t-1]);
        } else {
            dp[i][t] = max({dp[i-1][t],dp[i][t-1],dp[i-1][t-a]+b});
        }
    }
    int mx = 0;
    int ans = 0;
    for(int i=N-1;i>=0;--i){
        int a = A[i].second;
        mx = max(mx,a);
        ans = max(ans, dp[i][T-1]+mx);
    }
    cout << ans << endl;
}