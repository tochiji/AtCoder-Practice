#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
ll mod = 1e9 + 7;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> a(H);
    rep(i, H) cin >> a[i];
    vector<vector<ll>> dp(H, vector<ll>(W));

    rep(w, W) rep(h, H) {
        if (a[h][w] == '#') {
            dp[h][w] = 0;
            continue;
        }
        if (h == 0 && w == 0) {
            dp[h][w] = 1;
        }
        else if (h != 0 && w == 0) {
            dp[h][w] = dp[h - 1][w];
        }
        else if (h == 0 && w != 0) {
            dp[h][w] = dp[h][w - 1];
        }
        else {
            dp[h][w] = dp[h - 1][w] + dp[h][w - 1];
            dp[h][w] %= mod;
        }
    }

    cout << dp[H-1][W-1] << endl;
}