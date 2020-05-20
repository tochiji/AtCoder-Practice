#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

const ll MOD = 1000000007;

struct mint {
    ll x;
    mint(ll x = 0) : x((x % MOD + MOD) % MOD) {
    }
    mint operator-() const {
        return mint(-x);
    }
    mint &operator+=(const mint a) {
        if ((x += a.x) >= MOD) x -= MOD;
        return *this;
    }
    mint &operator-=(const mint a) {
        if ((x += MOD - a.x) >= MOD) x -= MOD;
        return *this;
    }
    mint &operator*=(const mint a) {
        (x *= a.x) %= MOD;
        return *this;
    }
    mint operator+(const mint a) const {
        mint res(*this);
        return res += a;
    }
    mint operator-(const mint a) const {
        mint res(*this);
        return res -= a;
    }
    mint operator*(const mint a) const {
        mint res(*this);
        return res *= a;
    }
    mint pow(ll t) const {
        if (!t) return 1;
        mint a = pow(t / 2);
        a *= a;
        if (t & 1) a *= *this;
        return a;
    }

    // for prime MOD
    mint inv() const {
        return pow(MOD - 2);
    }
    mint &operator/=(const mint a) {
        return (*this) *= a.inv();
    }
    mint operator/(const mint a) const {
        mint res(*this);
        return res /= a;
    }
};

ostream &operator<<(ostream &os, const mint &a) {
    return os << a.x;
}

int main() {
    int N;
    cin >> N;
    vec<ll> A(N), B(N);
    map<pair<ll, ll>, ll> P;
    rep(i, N) {
        cin >> A[i] >> B[i];
        ll g = gcd(abs(A[i]), abs(B[i]));
        if ((A[i] > 0 && B[i] > 0) || (A[i] < 0 && B[i] < 0)) {
            ++P[{abs(A[i]) / g, abs(B[i]) / g}];
        } else if (A[i] == 0 && B[i] == 0) {
            ++P[{0, 0}];
        } else if (A[i] == 0) {
            ++P[{0, -1}];
        } else if (B[i] == 0) {
            ++P[{1, 0}];
        } else {
            ++P[{abs(A[i]) / g, -1 * abs(B[i]) / g}];
        }
    }

    mint ans     = 1;
    mint anszero = 0;
    map<pair<ll, ll>, bool> checked;
    for (auto [f, s] : P) {
        ll A = f.first;
        ll B = f.second;
        if (s == 0 || checked[{A, B}]) continue;
        if (A == 0 && B == 0) {
            anszero = s;
        } else {
            checked[{A, B}] = true;
            ll VS;
            if (B > 0) {
                checked[{B, -A}] = true;
                VS               = P[{B, -A}];
            } else {
                checked[{-B, A}] = true;
                VS                = P[{-B, A}];
            }
            mint c1 = mint(2).pow(s) - 1;
            mint c2 = mint(2).pow(VS) - 1;
            ans *= (c1 + c2 + 1);
        }
    }
    cout << ans - 1 + anszero << endl;
}
