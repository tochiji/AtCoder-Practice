#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    vector<int> b(N);
    vector<int> c(N);
    rep(i,N){
        cin >> a[i] >> b[i] >> c[i];
    }
    int dp[3]   = {};
    int next[3] = {};

    rep(i, N) {
        next[0] = max(dp[1], dp[2]) + a[i];
        next[1] = max(dp[0], dp[2]) + b[i];
        next[2] = max(dp[0], dp[1]) + c[i];
        dp[0] = next[0];
        dp[1] = next[1];
        dp[2] = next[2];
    }
    cout << max({dp[0],dp[1],dp[2]}) << endl;
}