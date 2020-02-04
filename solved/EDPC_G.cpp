#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int N, M;
vector<vector<int>> G;
vector<int> dp;

int f(int now){
  if(dp[now] != 1e9) return dp[now];
  int ans = 0;
  for(auto e:G[now]){
    ans = max(ans,f(e)+1);
  }
  dp[now] = ans;
  return ans;
}

int main(){
   cin >> N >> M;
   G.resize(N);
   dp.resize(N,1e9);
   rep(i,M){
     int x,y;
     cin >> x >> y;
     x--;y--;
     G[x].push_back(y);
   }
   int ans = 0;
    rep(i,N){
      ans = max(ans,f(i));
    }
    cout << ans << endl;
}