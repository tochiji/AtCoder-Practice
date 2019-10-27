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
  int two = 0   ;
  int thr = 0;

  rep(i,N){
    int a;
    cin >> a;
    if(a == 1) one++;
    else if(a == 2) two++;
    else if(a == 3) thr++;
  printf("one=%d two=%d thr=%d\n",one,two,thr);
  }
  vector<vector<vector<double>>> dp(301,vector<vector<double>>(301,vector<double>(301)));


  rep(k,1)rep(j,1)rep(i,1){
    double plus = 0;
    if(i>=1) plus += dp[i-1][j][k] + (double)N/(N-(i-1));
    if(j>=1 && i+1<=300) plus += dp[i+1][j-1][k] + (double)N/i+1;
    if(k>=1 && j+1<=300) plus += dp[i][j+1][k-1] + (double)N/j+1;

    dp[i][j][k] = plus;
  }
  cout << dp[0][0][0] << endl;
}