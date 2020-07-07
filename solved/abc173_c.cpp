#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int H, W, K;
    cin >> H >> W >> K;
    vec<string> C(H);
    rep(i, H) cin >> C[i];

    int ans = 0;
    rep(h, 1 << H) rep(w, 1 << W) {
        int black = 0;
        rep(i, H) rep(j, W) {
            if ((h & 1 << i) || (w & 1 << j)) continue;
            if (C[i][j] == '#') ++black;
        }
        if (black == K) {
            ++ans;
        }
    }
    cout << ans << endl;
}
