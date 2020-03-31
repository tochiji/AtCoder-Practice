#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;
    vector<vector<int>> X(N, vector<int>(D));
    rep(i, N) rep(j, D) cin >> X[i][j];
    int ans = 0;

    rep(i, N) rep(j, i) {
        int S = 0;
        rep(d, D) S += (X[i][d] - X[j][d]) * (X[i][d] - X[j][d]);
        int sqrtS = sqrt(S);
        if (S == sqrtS * sqrtS) ++ans;
    }
    cout << ans << endl;
}