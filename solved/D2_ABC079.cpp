#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int H, W;
    cin >> H >> W;
    vec<vec<int>> G(10, vec<int>(10));

    rep(i, 10) rep(j, 10) {
        int d;
        cin >> d;
        G[i][j] = d;
    }

    // G ={
    // 0 4 3 6 2 7 2 5 3 3
    // 4 0 5 3 7 5 3 7 2 7
    // 5 7 0 7 2 9 3 2 9 1
    // 3 6 2 0 2 4 6 4 2 3
    // 3 5 7 4 0 6 9 7 6 7
    // 9 8 5 2 2 0 4 7 6 5
    // 5 4 6 3 2 3 0 5 4 3
    // 3 6 2 3 4 2 4 0 8 9
    // 4 6 5 4 3 5 3 2 0 8
    // 2 1 3 4 5 7 8 6 4 0
    // } （10×10の行列）

    function<void(int)> warshall_floyd = [&](int n) {
        for (int k = 0; k < n; k++) {            // 経由する頂点
            for (int i = 0; i < n; i++) {        // 始点
                for (int j = 0; j < n; j++) {    // 終点
                    G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
                }
            }
        }
    };

    // 行列の横/縦の大きさを指定する
    warshall_floyd(10);

    int ans = 0;
    rep(i,H*W){
        int k;cin>>k;
        if(k==-1)continue;
        ans+=G[k][1];
    }
    cout << ans << endl;
}