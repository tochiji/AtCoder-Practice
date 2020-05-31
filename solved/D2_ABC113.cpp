#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int H, W, K;
    cin >> H >> W >> K;
    --K;
    vec<vec<ll>> dp(H + 1, vec<ll>(W + 1, 0));
    dp[0][0] = 1;

    rep(h, H) {
        rep(i, 1 << (W - 1)) {
            bool flag = true;
            for (int j = 1; j <= (W - 1); ++j) {
                bool a = (i >> j) & 1;
                bool b = (i >> (j - 1)) & 1;
                if (a && b) flag = false;
            }
            if (!flag) continue;

            rep(j, W) {
                if (!((i >> j) & 1)) {
                    if(j==0) dp[h+1][j] += dp[h][j];
                    else if(!((i >> (j-1)) & 1)) dp[h+1][j] += dp[h][j];
                    else dp[h+1][j] += dp[h][j-1];
                } else {
                    dp[h+1][j] += dp[h][j+1];
                }
                dp[h+1][j] %= (ll)1e9+7;
            }
        }
    }

    cout << dp[H][K] << endl;
}