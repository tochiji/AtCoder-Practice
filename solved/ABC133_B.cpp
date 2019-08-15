#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
  int N,D;
  cin >> N >> D;
  vector<vector<int>> points(N);
  rep(i,N){
    points[i].resize(D);
    rep(d,D){
      cin >> points[i][d];
    }
  }

  int ans = 0;
  rep(i,N)rep(j,i){
    int ss = 0;
    rep(d,D){
      int s = points[i][d] - points[j][d];
      ss += s*s;
    }
    int root = sqrt(ss) + 0.1;
    if(ss == root*root) ans += 1;
  }

  cout << ans << endl;
}