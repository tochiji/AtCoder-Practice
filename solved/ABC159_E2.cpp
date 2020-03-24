#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int H, W, K;
    cin >> H >> W >> K;
    vector<string> S(H);
    rep(i, H) cin >> S[i];
    int ans = 1001001001;
    rep(bit, 1 << (H - 1)) {
        vector<int> g(H);
        int nowg = 0;
        rep(i, H) {
            g[i] = nowg;
            if (bit >> i & 1) ++nowg;
        }
        ++nowg;
        vector<vector<int>> c(nowg, vector<int>(W, 0));
        rep(i, H) rep(j, W) c[g[i]][j] += S[i][j] - '0';
        vector<int> now(nowg, 0);
        int tmpans = nowg - 1;
        rep(w, W) {
            bool flag = true;
            rep(g, nowg) {
                now[g] += c[g][w];
                if (now[g] > K) {
                    flag = false;
                    ++tmpans;
                    now = vector<int>(nowg, 0);
                    break;
                }
            }
            if (!flag) {
                rep(g, nowg) {
                    now[g] += c[g][w];
                    if (now[g] > K) {
                        tmpans = 1001001001;
                        break;
                    }
                }
            }
            if (tmpans == 1001001001) break;
        }
        ans = min(ans, tmpans);
    }
    cout << ans << endl;
}