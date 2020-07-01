#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

// 標準入力
// 
// 7
// 1 2 1
// 1 3 3
// 1 4 5
// 1 5 7
// 1 6 9
// 1 7 11
// 3 2
// 1 3
// 4 5
// 6 7


int main() {
    int N;
    cin >> N;
    
    vec<vec<pair<int,ll>>> G(N);
    rep(i, N-1){
        int a,b,c;
        cin >> a >> b >> c;
        --a,--b;
        G[a].push_back({b,c});
        G[b].push_back({a,c});
    }
    
    int Q, K;
    cin >> Q >> K;
    --K;
    ll INF = 1e18+9;
    vec<ll> d(N,INF);
    queue<pair<int,ll>> q;
    q.push({K,0});
    d[K] = 0;

    while(!q.empty()){
        int now = q.front().first;
        ll nowd = q.front().second;
        q.pop();

        for(auto [f, dist]:G[now]){
            ll nextd = nowd+dist;
            if(d[f] < nextd) continue;
            d[f] = nextd;
            q.push({f,nextd});
        }
    }
    
    rep(i, Q) {
        int x,y;
        cin >> x >> y;
        --x,--y;
        ll ans = d[x] + d[y];
        cout << ans << endl;
    }

}
