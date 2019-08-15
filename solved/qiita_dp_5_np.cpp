// https://qiita.com/drken/items/a5e6fe22863b7992efdb
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const int MOD = 1000000009;
const int MAXIMAM = 2147480000;

int main() {
    ll N, A;
    cin >> N >> A;
    vector<int> a(N);

    rep(i, N) cin >> a[i];

    vector<vector<int>> dp(N+1,vector<int>(A+1,MAXIMAM));
    dp[0][0] = 0;

    for(int i=0;i<N;i++){
        for(int s=0;s<=A;s++){
            dp[i+1][s] = dp[i][s];
            if(s >=a[i]){
                dp[i+1][s] = min(dp[i][s],dp[i][s-a[i]] + 1);
            }
        }
    }

    rep(i,N+1){
        rep(s,A+1) cout << dp[i][s] << " ";
        cout << endl;
    }

    if(dp[N][A] == MAXIMAM){
        cout << -1 << endl;
    } else {
        cout << dp[N][A] << endl;
    }

}