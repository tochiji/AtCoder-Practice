
#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define rep1(i,n) for(int i=1;i<(n);i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N;
	cin >> N;
  vector<double> P(N);
  rep(i,N) cin >> P[i];

  vector<vector<double>> dp(N+1,vector<double>(N+1,0));
  dp[1][0] = 1-P[0];
  dp[1][1] = P[0];

  rep1(i,N)rep(j,N){
    dp[i+1][j] += dp[i][j] * (1-P[i]);
    dp[i+1][j+1] += dp[i][j] * (P[i]);
  }
  double ans = 0;
  for(int i=(N+1)/2;i<=N;i++){
    ans += dp[N][i];
  }
  cout << fixed << setprecision(9);
  cout << ans << endl;
}