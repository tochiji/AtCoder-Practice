#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N, W;
    cin >> N >> W;

    vec<int> w(N), v(N);
    rep(i, N) cin >> w[i] >> v[i];

    int MAX_VALUE = N * 1000 + 1;
    vec<vec<int>> dp(N + 1, vec<int>(MAX_VALUE+1000,1e9+10));
    for (int i = 1; i <= N; ++i) {
        for(int j=MAX_VALUE;j>0;--j) {
            dp[i][j] = min({dp[i][j],dp[i][j+1], dp[i-1][j]});
            if(j<=v[i-1]) dp[i][j] = min(dp[i][j],w[i-1]);
            if(j>=v[i-1]) dp[i][j] = min(dp[i][j],dp[i-1][j-v[i-1]]+w[i-1]);
        }
    }

    ll ans = 0;
    rep(i,MAX_VALUE){
        if(dp[N][i] <= W) ans=max(ans,i);
    }
    cout << ans << endl;
}
