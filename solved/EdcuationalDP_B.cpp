#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N,K;
    cin >> N >> K;
    vector<int> h(N);
    rep(i, N) cin >> h[i];
    vector<int> dp(N);

    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);

    for(int i = 2;i<N;i++){
        int m = 1e9 + 7;
        for(int k = 1;k<=K;k++){
            if(i-k < 0) continue;
            m = min(m,dp[i-k] + abs(h[i]-h[i-k]));
        }
        dp[i] = m;
    }

    cout << dp[N-1] << endl;
}