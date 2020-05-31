#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N, M;
    cin >> N >> M;

    // N頂点、M辺
    // 行き先と距離あり
    vec<vec<pair<int, int>>> G(N, vec<pair<int, int>>());
    rep(i, M) {
        int L, R, D; // left,right,distance
        cin >> L >> R >> D;
        --L, --R;
        G[L].push_back({R, D});
        G[R].push_back({L, -D}); // 前後がある場合はマイナスにすること。
    }


    // 10万頂点、20万辺とかなら大丈夫
    function<void(int, int)> dfs = [&](int i, int par) {

        for (auto e : G[i]) {
            int next = e.first;
            int dist = e.second;
            if (next == par) continue;
            
            dfs(next,i);
        }
    };

    rep(i, N) {
        dfs(i,-1);
    }

    bool ans = true;
    cout << ((ans) ? "Yes" : "No") << endl;
}