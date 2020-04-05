#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int N,M;
    cin >> N >> M;
    vector<int> a(M);
    rep(i,M) cin >> a[i];
    int now = 0;
    vector<int> dp(N+1,0);
    dp[0] = 1;
    for(int i = 1;i<=N;i++){
        if(now < M && a[now] == i){
            ++now;
            continue;
        }
        if(i==1) dp[i] = dp[i-1];
        else {
            dp[i] = dp[i-1] + dp[i-2];
            dp[i]%=(int)(1e9+7);
        }
    }
    cout << dp[N] << endl;
}