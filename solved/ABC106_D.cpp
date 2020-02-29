#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;
    vector<vector<int>> dp(N, vector<int>(N, 0));
    rep(i, M) {
        int L, R;
        cin >> L >> R;
        L--;
        R--;
        dp[L][R]++;
    }
    rep(L, N) rep(R, N - 1) dp[L][R + 1] += dp[L][R];

    rep(i,Q){
      int p,q;
      cin >> p >> q;
      p--;q--;
      ll ans =  0;
      for(int i=p;i<=q;i++) {
        ans += dp[i][q];
      }
      cout << ans << endl;
    }
}