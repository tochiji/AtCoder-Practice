#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

struct UnionFind {
    vector<int> par;
    vector<int> cnt;

    UnionFind(int N) : par(N), cnt(N) {  // 初期化
        for (int i = 0; i < N; i++) {
            par[i] = i;
            cnt[i] = 1;
        }
    }

    void print() {
        for (int i = 0; i < par.size(); i++)
            printf("par[%d] = %d\n", i, par[i]);

        for (int i = 0; i < par.size(); i++)
            printf("cnt[%d] = %d\n", i, cnt[i]);
    }

    int root(int x) {
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) {  // xとyの木を併合
        int rx = root(x);
        int ry = root(y);
        if (rx == ry) return;
        if (cnt[rx] < cnt[ry]) {
            par[rx] = ry;
            cnt[ry] += cnt[rx];
        } else {
            par[ry] = rx;
            cnt[rx] += cnt[ry];
        }
    }

    bool same(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }

    int size() {
        int N = par.size();
        set<int> s;
        for (int i = 0; i < N; i++) {
            s.insert(root(i));
        }
        return s.size();
    }

    int count(int x) {
        return cnt[root(x)];
    }
};

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    vector<int> Friend(N, 0);
    UnionFind uf(N);
    rep(i, M) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        Friend[a]++;
        Friend[b]++;
        uf.unite(a, b);
    }
    vector<vector<int>> Block(N);
    rep(i, K) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        Block[a].push_back(b);
        Block[b].push_back(a);
    }
    rep(i, N) sort(all(Block[i]));

    rep(i, N) {
        int root       = uf.root(i);
        int blockCount = 0;
        for (auto e : Block[i]) {
            if (uf.root(e) == root) blockCount++;
        }
        cout << uf.count(i) - 1 - Friend[i] - blockCount << " ";
    }
		cout << endl;
}