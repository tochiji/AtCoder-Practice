#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int dp[30009][5][1000] = {0};

int main() {
    int N;
    string S;
    cin >> N >> S;
    int ans;
    dp[0][0][0] = 1;
    rep(i,N) {
        int s = S[i] - '0';
        rep(i2,4)rep(i3,1000){
            dp[i+1][i2][i3] |= dp[i][i2][i3];
            dp[i+1][i2+1][i3*10+s] |= dp[i][i2][i3];
        }
    }
    rep(i,1000) ans+=dp[N][3][i];
    cout << ans << endl;
}