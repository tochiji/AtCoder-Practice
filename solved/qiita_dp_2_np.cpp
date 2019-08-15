// https://qiita.com/drken/items/a5e6fe22863b7992efdb
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
    ll N, W;
    cin >> N >> W;
    vector<P> WV(N);

    rep(i, N) {
        cin >> WV[i].first >> WV[i].second;
    }

    int dp[N + 1][W + 1] = {};

    for (auto &e : dp[0])
        e = 0;

    for (int n = 0; n < N; n++) {
        for (int w = 0; w <= W; w++) {
            if (WV[n].first <= w) {
                dp[n + 1][w] =
                    max(dp[n][w], dp[n][w - WV[n].first] + WV[n].second);
            }
            else {
                dp[n + 1][w] = dp[n][w];
            }
            for (auto &e : dp) {
                for (auto v : e) {
                    cout << v << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
    }
    cout << dp[N][W] << endl;
}