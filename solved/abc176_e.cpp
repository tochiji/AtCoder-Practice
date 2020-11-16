#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    ll H, W, M;
    cin >> H >> W >> M;

    ll maxh = 0;
    ll maxw = 0;
    set<pair<int, int>> st;

    vec<ll>  hb(H), wb(W);
    rep(i, M) {
        int h,w;
        cin >> h >> w;
        --h, --w;
        ++hb[h], ++wb[w];
        maxh = max(maxh, hb[h]);
        maxw = max(maxw, wb[w]);
        st.insert({h, w});
    }
    vec<ll> maxhs, maxws;
    rep(i, H) if (hb[i] == maxh) maxhs.push_back(i);
    rep(i, W) if (wb[i] == maxw) maxws.push_back(i);
    for (auto e : maxhs) {
        for (auto j : maxws) {
            if (st.count({e, j}) == 0) {
                cout << maxh + maxw << endl;
                return 0;
            }
        }
    }
    cout << maxh + maxw - 1 << endl;
}
