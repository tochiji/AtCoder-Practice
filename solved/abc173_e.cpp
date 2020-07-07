#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

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
    ll N, K;
    cin >> N >> K;

    vec<ll> A(N);
    rep(i, N) cin >> A[i];
    sort(all(A), greater<ll>());

    mint ans = 1;
    ll l = 0, r = N - 1;
    if (K % 2 == 1) ans *= A[0], l = 1;

    rep(_, K / 2) {
        if (A[l] * A[l + 1] > A[r] * A[r - 1]) {
            ans *= A[l] * A[l + 1];
            l += 2;
        } else {
            ans *= A[r] * A[r - 1];
            r -= 2;
        }
    }

    if(K % 2 == 1 && A[0] < 0) {
        ans = 1;
        rep(i,K) ans*=A[i];
    }

    cout << ans << endl;
}
