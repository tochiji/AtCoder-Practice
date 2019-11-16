#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

struct UnionFind {
    // par[i]:iの親の番号　(例) par[3] = 99 : 3の親が99
    vector<int> par;

    UnionFind(int N) : par(N) {  // 初期化
        for (int i = 0; i < N; i++)
            par[i] = i;
    }

    int root(int x) {
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) {  // xとyの木を併合
        int rx = root(x);
        int ry = root(y);
        if (rx == ry) return;
        par[rx] = ry;
    }

    bool same(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main() {
    int N, M;
    cin >> N >> M;
    UnionFind uf(N);
    vector<int> p(N);

    rep(i, N) {
        int pn;
        cin >> pn;
        pn--;
        p[i] = pn;
    }

    rep(k, M) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        uf.unite(x, y);
    }

    int ans = 0;
    rep(i,N){
      if(uf.same(i,p[i])) ans++;
    }

    cout << ans << endl;
}