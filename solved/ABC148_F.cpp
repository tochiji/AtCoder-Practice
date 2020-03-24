#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

vector<vector<int>> G;
vector<int> A;
vector<int> B;

void dfs(int t, vector<int> &V, int cnt) {
    V[t] = cnt;
    for (auto e : G[t]) {
        if (V[e] != -1) continue;
        dfs(e, V, cnt + 1);
    }
}

int main() {
    int N, u, v;
    cin >> N >> u >> v;
    --u;
    --v;
    G.resize(N);
    A.resize(N, -1);
    B.resize(N, -1);
    rep(i, N - 1) {
        int a, b;
        cin >> a >> b;
        --a;
        --b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    dfs(u, A, 0);
    dfs(v, B, 0);


    int ans    = 0;
    rep(i, N) {
        if (B[i] > A[i]) ans = max(ans,B[i]);
    }
    cout << ans - 1 << endl;
}