#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

vec<vec<pair<int,int>>> G;
vec<bool> visited;
vec<int> x;
bool ans = true;

void dfs(int now,int nowx, int par){
    if(!ans || visited[now]) return;
    visited[now] = true;
    x[now] = nowx;

    for(auto E:G[now]){
        int e = E.first;
        int d = E.second;
        if(e==par) continue;
        int ex = nowx+d;
        if(!visited[e]) {
            dfs(e,ex,now);
        } else {
            if(ex==x[e]) continue;
            else {
                ans=false;
            }
        }
    }
}

int main() {
    int N,M;
    cin >> N >> M;
    G.resize(N,vec<pair<int,int>>());
    
    rep(i,M){
        int L,R,D;
        cin >> L >> R >> D;
        --L,--R;
        G[R].push_back({L,-D});
        G[L].push_back({R,D});
    }
    visited.resize(N,false);
    x.resize(N,0);
    rep(i,N){
        if(!visited[i]) dfs(i,0,-1);
    }
    rep(i,N){
        cout << x[i] << " ";
    }
    cout << endl;
    cout << (ans?"Yes":"No") << endl;
}