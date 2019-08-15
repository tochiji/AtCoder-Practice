// https://qiita.com/drken/items/a5e6fe22863b7992efdb
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const int MOD = 1000000009;

int main() {
    ll N, A;
    cin >> N >> A;
    vector<int> a(N);

    rep(i, N) cin >> a[i];

    // vector<vector<int>> dp(N+1, vector<int>(A+1));
    int dp[N + 1][A + 1] = {};
    dp[0][0] = 1;

    for(int i=0;i<N;i++){
        for(int s=0;s<=A;s++){
            dp[i+1][s] = dp[i][s] % MOD;
            if(s >= a[i]) dp[i+1][s] = (dp[i+1][s] + dp[i][s - a[i]]) % MOD;
        }
    }

    rep(i,N+1){
        rep(s,A+1) cout << dp[i][s] << " ";
        cout << endl;
    }

    cout << dp[N][A] << endl;
}