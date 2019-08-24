#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define rep1(i,n) for(int i=1;i<(n);i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N;
	cin >> N;
  int one = 0;
  int two = 0;
  int thr = 0;

  printf("one=%d two=%d thr=%d\n",one,two,thr);

  rep(i,N){
    int a;
    cin >> a;
    if(a == 1) one++;
    else if(a == 2) two++;
    else if(a == 3) thr++;
  printf("one=%d two=%d thr=%d\n",one,two,thr);
  }
  vector<vector<vector<double>>> dp(N+1,vector<vector<double>>(N+1,vector<double>(N+1)));


  rep(k,N+1)rep(j,N+1)rep(i,N+1){
    printf("one=%d two=%d thr=%d",i,j,k);
    cout << "Yes" << endl;
    double plus = 0;
    if(i>=1) plus += dp[i-1][j][k] + (double)N/(N-(i-1));
    if(j>=1) plus += dp[i+1][j-1][k] + (double)N/i+1;
    if(k>=1) plus += dp[i][j+1][k-1] + (double)N/j+1;

    dp[i][j][k] = plus;
  }
  cout << dp[one][two][thr] << endl;
}