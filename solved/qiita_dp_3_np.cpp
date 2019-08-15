// https://qiita.com/drken/items/a5e6fe22863b7992efdb
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
    ll N, A;
    cin >> N >> A;
    vector<int> num(N);

    rep(i, N) cin >> num[i];
    bool dp[N + 1][A + 1] = {};
    dp[0][0] = true;

    for(int i=0;i<N;i++){
        for(int a=0;a<=A;a++){
            if(dp[i][a] == true) dp[i+1][a] = true;
            else if(num[i] <= a) dp[i+1][a] |= dp[i][a - num[i]];
            else dp[i+1][a] = false;
        }
    }

    rep(i,N+1){
        rep(a,A+1) cout << dp[i][a] << " ";
        cout << endl;
    }

    if(dp[N][A]) cout << "Yes" << endl;
    else cout << "No" << endl;
}