#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;
ll mod = 1e9 + 7;

ll dp[10005][105] = {};
ll dp2[10005][105] = {};

int main() {
    int D;
    string N;
    cin >> D >> N;
    int Nketa = N.size();

    dp[0][0] = 1;
    dp2[0][0] = 1;

    rep(n,Nketa)rep(d,D)rep(k,10){
        (dp[n+1][(d+k)%D] += dp[n][d]) %= mod;
        
        int keta = N[Nketa - (n + 1)] - '0';
        if(k < keta){
            (dp2[n+1][(d+k)%D] += dp[n][d]) %= mod;
            // カッコを付けなければ、先にmodが計算されるため間違いになる
        } else if(k == keta){
            (dp2[n+1][(d+k)%D] += dp2[n][d]) %= mod;
        } else {
            (dp2[n+1][(d+k)%D] += 0) %= mod;
        }
    }

    cout << dp2[Nketa][0] - 1LL << endl;
}