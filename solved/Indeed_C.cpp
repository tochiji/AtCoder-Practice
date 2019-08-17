#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

// tech lang comm
int dp[102][102][102] = {};

int main() {
    int N, M;
    cin >> N >> M;
    rep(i, N) {
        int tech, lang, comm, sala;
        cin >> tech >> lang >> comm >> sala;
        dp[tech][lang][comm] = max(dp[tech][lang][comm], sala);
    }

    rep(t, 101) rep(l, 101) rep(c, 101) {
        dp[t][l][c + 1]     = max(dp[t][l][c], dp[t][l][c + 1]);
        dp[t][l + 1][c]     = max(dp[t][l][c], dp[t][l + 1][c]);
        dp[t + 1][l][c]     = max(dp[t][l][c], dp[t + 1][l][c]);
    }

    rep(i, M) {
        int tech, lang, comm;
        cin >> tech >> lang >> comm;
        cout << dp[tech][lang][comm] << endl;
    }
}