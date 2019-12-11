#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;
ll MOD = 1e9+7;

int main() {
    ll N;
    cin >> N;

    vector<ll> A(N);
    rep(i, N) cin >> A[i];
    vector<ll> Ones(61, 0);

    auto modpow = [](ll a, ll n, ll mod) {
        ll res = 1;
        while (n > 0) {
            if (n & 1) res = res * a % mod;
            a = a * a % mod;
            n >>= 1;
        }
        return res;
    };

    rep(i, N) {
        rep(b, 61) {
            if (bitset<61>(A[i])[b] == 1) {
                Ones[b]++;
            }
        }
    }

    ll ans = 0;
    rep(i, 61) {
        ll p = (ll)modpow(2, i, MOD);
        ans += (Ones[i] * (N - Ones[i])) % MOD * p;
        ans %= MOD;
    }
    cout << (ll)ans << endl;
}