#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;
    
    vec<int> h(N+3);
    rep(i, N) cin >> h[i];
    vec<int> dp(N+3,1e9+7);
    dp[1] = 0;
    for(int i=1;i<=N-1;++i){
        dp[i+2] = min(dp[i+2],dp[i]+abs(h[i-1]-h[i+1]));
        dp[i+1] = min(dp[i+1],dp[i]+abs(h[i-1]-h[i]));
    }
    cout << dp[N] << endl;
}
