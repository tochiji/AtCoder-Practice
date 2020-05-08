#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N,M,L;
    cin >> N >> M >> L;
    vec<vec<pair<int, int>>> G(N,vec<pair<int, int>>());
    rep(i,M){
        int a,b,c;
        cin >> a >> b >> c;
        --a,--b;
        G[a].push_back({b,c});
        G[b].push_back({a,c});
    }
    int Q;
    cin >> Q;
    vec<pair<int,int>> q(Q);
    rep(i,Q) cin >> q[i].first >> q[i].second;
}