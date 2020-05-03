#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N,M;
    cin >> N >> M;
    vec<int> H(N);
    rep(i,N) cin >> H[i];
    vec<bool> G(N,true);
    rep(i,M){
        int a,b;
        cin >> a >> b;
        --a,--b;
        if(H[a] <= H[b]) G[a] = false;
        if(H[a] >= H[b]) G[b] = false;
    }
    int ans = 0;
    rep(i,N) {
        if(G[i]) ++ans;
    }
    cout << ans << endl;
}
