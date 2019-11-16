#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

const ll MOD  = 1000000007;
const ll MAX = 1000009;
ll fac[MAX], finv[MAX], inv[MAX];  //階乗、階乗の逆元、逆元

void nCk_init() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1]            = 1;
    for (int i = 2; i < MAX; i++) {
        fac[i]  = fac[i - 1] * i % MOD;
        inv[i]  = MOD - inv[MOD % i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

ll nCk(int n, int k) {
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main() {
    int X, Y;
    cin >> X >> Y;
    int xyDiff = abs(X - Y);
    int n      = (X + Y) / 3;

    nCk_init();
    if ((X + Y) % 3 == 0 && xyDiff <= n) {
        cout << nCk(n, n*2 - X) << endl;
    }
    else {
        cout << 0 << endl;
    }
}