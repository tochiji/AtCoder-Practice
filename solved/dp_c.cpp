#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;
    
    vec<int> a(N), b(N), c(N);
    rep(i, N) cin >> a[i] >> b[i] >> c[i];

    vec<vec<int>> dp(N+1,vec<int>(3,0));
    dp[1][0] = a[0];
    dp[1][1] = b[0];
    dp[1][2] = c[0];
    for(int i=1;i<=N-1;++i)rep(j,3){
        if(j!=0) dp[i+1][0] = max(dp[i+1][0],dp[i][j]+a[i]);
        if(j!=1) dp[i+1][1] = max(dp[i+1][1],dp[i][j]+b[i]);
        if(j!=2) dp[i+1][2] = max(dp[i+1][2],dp[i][j]+c[i]);
    }
    cout << max({dp[N][0],dp[N][1],dp[N][2]}) << endl;
}
