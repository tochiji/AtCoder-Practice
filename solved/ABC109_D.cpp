#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<int>> a(H, vector<int>(W));
    vector<pair<int, int>> odd;
    rep(h, H) rep(w, W) {
        cin >> a[h][w];
    }

    vector<vector<int>> ans;
    int stack = 0;
    rep(h, H) rep(wt, W) {
        if (h == H - 1 && wt == W - 1) break;
        int w = wt;
        if (h % 2 == 1) {
            w = W - wt - 1;
            if (a[h][w] % 2 == 1) {
                if (wt == W - 1) {
                    ans.push_back({h + 1, w + 1, h + 2, w + 1});
                    a[h + 1][w]++;
                } else {
                    ans.push_back({h + 1, w + 1, h + 1, w});
                    a[h][w - 1]++;
                }
            }
        } else {
            if (a[h][w] % 2 == 1) {
                if (wt == W - 1) {
                    ans.push_back({h + 1, w + 1, h + 2, w + 1});
                    a[h + 1][w]++;
                } else {
                    ans.push_back({h + 1, w + 1, h + 1, w + 2});
                    a[h][w + 1]++;
                }
            }
        }
    }

    cout << ans.size() << endl;
    for (auto e : ans)
        printf("%d %d %d %d\n", e[0], e[1], e[2], e[3]);
}