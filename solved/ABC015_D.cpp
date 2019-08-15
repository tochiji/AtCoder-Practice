#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

struct P {
    int A;
    int B;
};

//     n   K     W
int dp[55][55][10005] = {};

int main() {
    int W, N, K;
    cin >> W >> N >> K;
    vector<P> s(N);
    rep(i, N) cin >> s[i].A >> s[i].B;

    // Wcm以下
    // K枚以下

    rep(n, N) rep(k, K + 1) rep(w, W + 1) {
        if (w + s[n].A <= W) {
            dp[n + 1][k + 1][w + s[n].A] =
                max(dp[n][k][w] + s[n].B, dp[n][k][w + s[n].A]);
        }
        dp[n + 1][k][w] = max(dp[n + 1][k][w], dp[n][k][w]);
    }

    rep(n, N+1) rep(k, K + 1) rep(w, W + 1) {
        printf("dp[%d][%d][%d] = %d\n", n, k, w, dp[n][k][w]);
    }
    cout << dp[N][K][W] << endl;
}