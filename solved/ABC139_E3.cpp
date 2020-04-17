#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

#define debug(x) cout << #x << "=" << x << endl;
#define vdebug(v) { cout << #v << "=" << endl; rep(i_debug, v.size()) { cout << v[i_debug] << ",";}cout << endl; }
#define mdebug(m) { cout << #m << "=" << endl; rep(i_debug, m.size()) { rep(j_debug, m[i_debug].size()) { cout << m[i_debug][j_debug] << ","; } cout << endl; } }

int dfs(int v,vector<vector<int>> &to, vector<bool> &visited, vector<int> &c){
    if(c[v] != -1) return c[v];
    if(visited[v]) return -1;
    visited[v] = true;
    c[v] = -1;
    for(auto e:to[v]){
        int tmpres = dfs(e,to,visited,c);
        if(tmpres == -1) return -1;
        c[v] = max(c[v],tmpres+1);
    }
    if(c[v] == -1) c[v] = 1;
    return c[v];
}

int main() {
    int N;
    cin >> N;
    vector<vector<int>> ids(N,vector<int>());
    int maxid = 1;
    map<pair<int,int>,int> mp;
    auto addId = [&](int i,int vs){
        int k = i;
        if(i>vs) swap(i,vs);
        if(mp[{i,vs}] == 0){
            mp[{i,vs}] = maxid;
            ++maxid;
        }
        ids[k].push_back(mp[{i,vs}]-1);
    };
    rep(i,N)rep(j,N-1){
        int vs;
        cin >> vs;
        --vs;
        addId(i,vs);
    }
    vector<vector<int>> to(maxid,vector<int>());
    rep(i,N)rep(j,N-2){
        to[ids[i][j+1]].push_back(ids[i][j]);
    }
    mdebug(to);
    vector<int> calculated(maxid,-1);
    vector<bool> visited(maxid,false);
    int ans = 0;
    rep(i,maxid-1){
        int tmpans = dfs(i,to,visited,calculated);
        if(tmpans == -1) {
            cout << -1 << endl;
            return 0;
        }
        ans = max(ans,tmpans);
    }
    cout << ans << endl;
}