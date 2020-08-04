#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N, K;
    cin >> N >> K;
    
    vec<int> h(N+10);
    rep(i, N) cin >> h[i];
    vec<int> dp(N+10,1e9+7);
    dp[1] = 0;

    for(int i=1;i<=N-1;++i)for(int j=1;j<=K&&i+j<=N;++j){
        dp[i+j] = min(dp[i+j],dp[i]+abs(h[i-1]-h[i+j-1]));
    }
    cout << dp[N] << endl;
}
