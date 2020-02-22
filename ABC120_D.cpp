#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

struct UnionFind {
    // par[i]:iの親の番号　(例) par[3] = 99 : 3の親が99
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
    int N, M;
    cin >> N >> M;
    UnionFind uf(N);
    vector<int> A(M), B(M);
    rep(i, M) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        A[i] = a;
        B[i] = b;
    }
    ll ans = N*(N-1)/2;
    vector<ll> anss;
    anss.push_back(ans);
    rep(i,M){
        ans -= uf.count(A[M-i-1]) * uf.count(B[i]);
        anss.push_back(ans);
        uf.unite(A[i],B[i]);
    }
    rep(i,M){
        cout << anss[M-i-1] << endl;
    }
}