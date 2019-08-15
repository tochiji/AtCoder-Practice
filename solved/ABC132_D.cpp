// nCk combination 二項定理 組み合わせ パスカルの三角形よりこっちのほうが速い
// https://qiita.com/drken/items/3b4fdf0a78e7a138cd9a
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const int MOD = 1000000007;
const int MAXIMAM = 2147480000;

const int MAX = 50001;
ll fac[MAX], finv[MAX], inv[MAX]; //階乗、階乗の逆元、逆元

void nCk_init() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

ll nCk(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main() {
    nCk_init();
    ll N, K;
    cin >> N >> K;
    ll BLUE = K;
    ll BLUE_BETWEEN = K - 1;
    ll RED = N - K;
    ll RED_SPACES = RED + 1;

    for(ll i=1;i<=K;i++){
      ll ans_l = nCk(RED_SPACES,i);
      ll ans_r = nCk(BLUE_BETWEEN,i-1);
      cout << ans_l * ans_r % MOD << endl;
    }
}