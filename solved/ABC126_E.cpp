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

    int size(){
        int N = par.size();
        set<int> s;
        for (int i = 0; i < N; i++) {
            s.insert(root(i));
        }
        return s.size();
    }
};

int main() {
    int N, M;
    cin >> N >> M;
    UnionFind uf(N);
    int ans = 0;

    rep(i, M) {
        int x, y, z;
        cin >> x >> y >> z;
        x--;
        y--;
        uf.unite(x,y);
    }
    
    cout << uf.size() << endl;
}