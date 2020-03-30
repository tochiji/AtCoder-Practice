#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

vector<vector<pair<int,int>>> G;
vector<int> ans;
int mx = -1;

void dfs(int t,int c, int prv){
    int color_now = 1;
    for(int i = 0; i<G[t].size();++i){
        if(color_now == c) ++color_now;
        int e = G[t][i].first;
        if(e == prv) continue;
        ans[G[t][i].second] = color_now;
        mx = max(mx,color_now);
        dfs(e,color_now,t);
        ++color_now;
    }
}

int main() {
    int N;
    cin >> N;
    G.resize(N);
    ans.resize(N-1,-1);
    rep(i,N-1){
        int a,b;
        cin >> a >> b;
        --a;--b;
        G[a].push_back({b,i});
        G[b].push_back({a,i});
    }
    dfs(0,0,-1);
    cout << mx << endl;
    for(auto e:ans) cout << e << endl;
}