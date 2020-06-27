#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

// BIT<ll> bit(N); などで初期化
template <typename T> struct BIT {
    int n;
    vector<T> bit;
    BIT(int n_) : n(n_ + 1), bit(n, 0) {
    }

    // bit.add(1,10)で「1」に10を足せる。
    // 中身は1-indexedなので、「0」を受け取ってはいけない.
    void add(int i, T x) {
        if (i == 0) {
            cout << "BIT add ERROR" << endl;
            exit(1);
        }
        for (int idx = i; idx < n; idx += (idx & -idx)) {
            bit[idx] += x;
        }
    }

    // bit.sum(3)で、「1〜3」の値の合計を返す。
    // bit.sum(0)は0を返す。
    T sum(int i) {
        T s(0);

        for (int idx = i; idx > 0; idx -= (idx & -idx)) {
            s += bit[idx];
        }
        return s;
    }
};

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
    vec<mint> fact(N+1);
    fact[0] = 1;
    for (int i = 1; i <= N; ++i)
        fact[i] = fact[i - 1] * i;

    BIT<ll> bit(N);
    vec<int> a(N);
    rep(i, N) cin >> a[i];

    mint ans = 1;
    rep(i,N){
        int n = a[i];
        bit.add(n,1);
        int e = N-i-1;
        ans+= fact[e]*(n-bit.sum(n));
    }
    cout << ans << endl;
}
