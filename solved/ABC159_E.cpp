#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int c[10][1005];

int main() {
    int H, W, K;
    cin >> H >> W >> K;
    vector<string> S(H);
    rep(i, H) cin >> S[i];
    int ans = (int)1001001001;
    rep(div, 1 << (H - 1)) {
        int g = 0;
        vector<int> id(H);
        rep(i, H) {
            id[i] = g;
            if (div >> i & 1) ++g;
        }
        ++g;
        rep(i, g) rep(j, W) c[i][j] = 0;
        rep(i, H) rep(j, W) c[id[i]][j] += (S[i][j] - '0');

        int num = g - 1;
        vector<int> now(g);
        auto add = [&](int j) {
            rep(i, g) now[i] += c[i][j];
            rep(i, g) if (now[i] > K) return false;
            return true;
        };
        rep(j, W) {
            if (!add(j)) {
                num++;
                now = vector<int>(g);
                if (!add(j)) {
                    num = (int)1001001001;
                    break;
                }
            }
        }
        ans = min(ans, num);
    }
    cout << ans << endl;
}