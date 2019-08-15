#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;
ll mod = 1e9 + 7;

int main() {
    int N, K;
    cin >> N >> K;

    vector<ll> dp0(N + 1);
    vector<ll> dp1(N + 1);

    dp0[0] = 1, dp0[1] = 1;
    dp1[0] = 1, dp1[1] = 0;

    for (int i = 2; i < N + 1; i++) {
        dp0[i] = (dp0[i - 1] + dp1[i - 1]) % mod;
        dp1[i] = (dp0[i - 1] + dp1[i - 1]) % mod;

        if (i >= K) {
            dp0[i] = (dp0[i] - dp1[i - K] + mod) % mod;
        }
    }
    cout << dp0[N] << endl;
}