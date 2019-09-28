#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<int>> S(H, vector<int>(W));
    rep(h, H) {
        string s;
        cin >> s;
        rep(w, W) {
            if (s[w] == '#') {
                S[h][w] = 0;
            }
            else {
                S[h][w] = 1;
            }
        }
    }

    vector<vector<int>> hor(H, vector<int>(W));
    vector<vector<int>> ver(H, vector<int>(W));

    // 横と縦の合計を求めていく
    rep(h, H) {
        rep(w, W) {
            if (S[h][w] == 0) {
                hor[h][w] = 0;
                ver[h][w] = 0;
                continue;
            }
            if (w == 0 && h == 0) {
                hor[h][w] = S[h][w];
                ver[h][w] = S[h][w];
            }
            else if (h == 0) {
                hor[h][w] = hor[h][w - 1] + S[h][w];
                ver[h][w] = S[h][w];
            }
            else if (w == 0) {
                hor[h][w] = S[h][w];
                ver[h][w] = ver[h - 1][w] + S[h][w];
            }
            else {
                hor[h][w] = hor[h][w - 1] + S[h][w];
                ver[h][w] = ver[h - 1][w] + S[h][w];
            }
        }
    }
    for (int h = H - 1; h >= 0; h--)
        for (int w = W - 1; w >= 0; w--) {
            if (S[h][w] == 0) {
                hor[h][w] = 0;
                ver[h][w] = 0;
                continue;
            }
            if (h == H - 1 && w == W - 1) {
                continue;
            }
            else if (h == H - 1) {
                hor[h][w] = max(hor[h][w + 1], hor[h][w]);
            }
            else if (w == W - 1) {
                ver[h][w] = max(ver[h + 1][w], ver[h][w]);
            }
            else {
                hor[h][w] = max(hor[h][w + 1], hor[h][w]);
                ver[h][w] = max(ver[h + 1][w], ver[h][w]);
            }
        }

    int ans = 0;
    rep(h, H) rep(w, W) {
        ans = max(ans, hor[h][w] + ver[h][w]);
    }

    cout << ans - 1 << endl;
}