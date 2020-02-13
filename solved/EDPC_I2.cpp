#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<double> p(N);
    rep(i,N) cin >> p[i];
    vector<vector<double>> dp(N+1,vector<double>(N+1,0));
    dp[1][0] = 1-p[0];
    dp[1][1] = p[0];

    rep(i,N)rep(j,N){
        dp[i + 1][j] += dp[i][j] * (1 - p[i]);
        dp[i + 1][j+1] += dp[i][j] * (p[i]);
    }
    
    double ans = 0;
    for(int i=(N+1)/2;i<=N;i++){
      ans += dp[N][i];
    }
    cout << fixed << setprecision(9);
    cout << ans << endl;
}