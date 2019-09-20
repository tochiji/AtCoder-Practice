#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

struct p {
    int h;
    int w;
    int kabe;
};

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> c(H);
    rep(i, H) cin >> c[i];

    deque<p> dq;

    rep(h, H) rep(w, W) {
        if (c[h][w] == 's') {
            dq.push_front({h, w, 0});
            c[h][w] = 'X';
        }
    }

    while (!dq.empty()) {
        int h    = dq.front().h;
        int w    = dq.front().w;
        int kabe = dq.front().kabe;
        dq.pop_front();

        int hs[4] = {0, 0, 1, -1};
        int ws[4] = {1, -1, 0, 0};
        for (auto e : {0, 1, 2, 3}) {
            int nh = h + hs[e];
            int nw = w + ws[e];
            if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
            char C = c[nh][nw];
            if (C == '.') {
                dq.push_front({nh, nw, kabe});
                c[nh][nw] = 'X';
            }
            else if (C == '#' && kabe <= 1) {
                dq.push_back({nh, nw, kabe+1});
                c[nh][nw] = 'X';
            }
            else if (kabe <= 2 && C == 'g') {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;
}