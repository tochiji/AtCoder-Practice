#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    ll N;
    string X;
    cin >> N >> X;

    bitset<200000> b(X);
    ll c  = b.count();
    ll mc = 0;
    ll pc = 0;
    rep(i, N) {
        ll t = X[i] - '0';
        if (c - 1 != 0) mc = (mc * 2 + t) % (c - 1);
        pc = (pc * 2 + t) % (c + 1);
    }

    vec<ll> f(N + 1, 0);
    vec<ll> popcount(N + 1, 0);

    for (ll i = 1; i <= N; ++i) {
        popcount[i] = popcount[i / 2] + i % 2;
        f[i]        = f[i % popcount[i]] + 1;
    }

    vec<ll> mpow2(N + 1, 1);
    vec<ll> ppow2(N + 1, 1);
    for (ll i = 1; i <= N; ++i) {
        if (c - 1 != 0) mpow2[i] = mpow2[i - 1] * 2 % (c - 1);
        ppow2[i] = ppow2[i - 1] * 2 % (c + 1);
    }

    rep(i, N) {
        ll t = X[i] - '0';
        if (t == 1) {
            if (c - 1 == 0) {
                cout << 0 << endl;
            } else {
                ll nt = mc;
                nt -= mpow2[N - 1 - i];
                nt += c-1;
                nt %= (c - 1);
                cout << f[nt] + 1 << endl;
            }
        } else {
            ll nt = pc;
            nt += ppow2[N - 1 - i];
            nt %= (c + 1);
            cout << f[nt] + 1 << endl;
        }
    }
}
