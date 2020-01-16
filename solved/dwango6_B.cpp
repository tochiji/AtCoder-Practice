#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;
ll MOD = 1e9+7;

ll modinv(ll a, ll mod) {
    ll b = mod, u = 1, v = 0;
    while (b) {
        ll t = a / b;
        a -= t * b;
        swap(a, b);
        u -= t * v;
        swap(u, v);
    }
    u %= mod;
    if (u < 0) u += mod;
    return u;
}

int main() {
    int N;
    cin >> N;
    vector<int> x(N);
    rep(i, N) cin >> x[i];
    vector<ll> d(N - 1);

    for (int i = 1; i < N; i++) {
        d[i - 1] = x[i] - x[i - 1];
    }

    ll p = 1;
    for (ll i = 1; i <= N - 1; i++) {
        p = (p * i) % MOD;
    }

    vector<ll> xs(N - 1);
    xs[0] = p;
    for (ll i = 2; i <= N - 1; i++) {
        xs[i - 1] = xs[i - 2] + p * modinv(i, MOD);
        xs[i - 1] %= MOD;
    }

    ll ans = 0;
    rep(i, N - 1) {
        ans += ((d[i] * xs[i]) % MOD);
        ans %= MOD;
    }
    cout << ans << endl;
}