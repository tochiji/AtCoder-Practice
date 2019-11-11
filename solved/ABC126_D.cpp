#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

struct distination {
    int to;
    int distance;
};

int N;
vector<vector<distination>> G;
vector<int> ans;

void dfs(int root, int p, int n) {
    ans[root] = n;
    for(auto e:G[root]){
      if(e.to == p) continue;
      if(e.distance&1) dfs(e.to,root,1-n);
      else dfs(e.to,root,n);
    }
}

int main() {
    cin >> N;
    G.resize(N);
    rep(i, N-1) {
        int from, to, distance;
        cin >> from >> to >> distance;
        from--;
        to--;
        G[from].push_back({to, distance});
        G[to].push_back({from, distance});
    }

    ans.assign(N, 0);
    dfs(0,-1,0);

    for(auto e:ans) cout << e << endl;
}