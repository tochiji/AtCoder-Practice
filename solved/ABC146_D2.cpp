#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

struct P{
  int to;
  int index;
};

vector<vector<P>> G;
vector<int> ans;
int K = 0;

void dfs(int point,int parent,int col){
  int nowcolor = 1;
  for(auto e:G[point]){
    if(e.to != parent){
      if(nowcolor == col) nowcolor++;
      ans[e.index] = nowcolor;
      K            = max(K, nowcolor);
      dfs(e.to,point,nowcolor);
      nowcolor++;
    }
  }
}

int main() {
    int N;
    cin >> N;
    G.resize(N);
    ans.resize(N - 1);

    rep(i,N-1){
      int a,b;
      cin >> a >> b;
      a--;b--;
      G[a].push_back({b,i});
      G[b].push_back({a,i});
    }

    dfs(0,-1,0);

    cout << K << endl;
    rep(i,N-1) cout << ans[i] << endl;
}