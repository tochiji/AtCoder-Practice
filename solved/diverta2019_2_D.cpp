#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
    ll N;
    cin >> N;
    vector<vector<ll>> AB(2, vector<ll>(3));

    for (auto &r : AB) {
        for (auto &c : r)
            cin >> c;
    }

    for (int i = 0; i < 2; i++) {
        vector<ll> from = AB[i], to = AB[(i + 1) % 2];
        vector<ll> dp(N + 1);
        iota(dp.begin(), dp.end(), 0LL);

        for (int D = 0; D <= N; D++) {
            if (D + from[0] <= N)
                dp[D + from[0]] = max(dp[D + from[0]], dp[D] + to[0]);
            if (D + from[1] <= N)
                dp[D + from[1]] = max(dp[D + from[1]], dp[D] + to[1]);
            if (D + from[2] <= N)
                dp[D + from[2]] = max(dp[D + from[2]], dp[D] + to[2]);
        }
        N = dp[N];
    }
    cout << N << endl;
}