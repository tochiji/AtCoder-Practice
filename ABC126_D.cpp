#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

struct distination {
    int from;
    int to;
    int distance;
};

int N;
vector<vector<distination>> G;
vector<int> ans;

void dfs(int root, int p, int n) {
    ans[root] = n;
    for(auto e:G[root]){
      if(ans[e.to] != -1) continue;
      dfs(e.to,root,(n+e.distance)%2);
    }
}

int main() {
    cin >> N;
    G.resize(N);
    rep(i, N) {
        int from, to, distance;
        cin >> from >> to >> distance;
        from--;
        to--;
        distance = (distance % 2 == 1) ? 1 : 0;
        G[from].push_back({from, to, distance});
        G[to].push_back({to, from, distance});
    }
    ans.resize(N, -1);
    dfs(0,-1,0);

    for(auto e:ans) cout << e << endl;
}