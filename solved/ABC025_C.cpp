#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

vector<vector<int>> buka;

int dfs(int n){
  int size = buka[n].size();
  if(size == 0) return 1;
  if(size == 1) return dfs(buka[n][0]) * 2 + 1;
  else if(size >= 2){
    int mx = 0;
    int mn = 1e9;
    for(auto e:buka[n]){
      int pay = dfs(e);
      mx = max(mx,pay);
      mn = min(mn,pay);
    }
    return mx + mn + 1;
  }
  return 0;
}

int main() {
	int N;
	cin >> N;
  buka.resize(N);

  rep(i,N-1){
    int j;
    cin >> j;
    j--;
    buka[j].push_back(i+1);
  }

  cout << dfs(0) << endl;
}