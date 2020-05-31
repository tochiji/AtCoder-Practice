#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N, M;
    cin >> N >> M;
    vec<vec<pair<int, int>>> G(N, vec<pair<int, int>>());
    rep(i, M) {
        int L, R, D;
        cin >> L >> R >> D;
        --L, --R;
        G[L].push_back({R, D});
        G[R].push_back({L, -D});
    }
    vec<int> Dist(N, (int)-1e9);
    bool ans = true;


    function<void(int, int, int)> dfs = [&](int i, int par, int d) {
        Dist[i] = d;
        for (auto e : G[i]) {
            int next = e.first;
            int dist = e.second;
            if (next == par) {
                if (Dist[next] != d + dist) ans = false;
                continue;
            }
            if (Dist[next] == (int)-1e9) dfs(next, i, d + dist);
            else if (Dist[next] != d + dist)
                ans = false;
        }
    };

    rep(i, N) {
        if (Dist[i] != (int)-1e9) continue;
        dfs(i, -1, 0);
    }

    cout << ((ans) ? "Yes" : "No") << endl;
}