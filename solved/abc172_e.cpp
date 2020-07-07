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
        mint a = pow(t/2);
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

struct counting {
    vector<mint> fact, ifact;
    counting(int n) : fact(n + 1), ifact(n + 1) {
        assert(n < MOD);
        fact[0] = 1;
        for (int i = 1; i <= n; ++i)
            fact[i] = fact[i - 1] * i;
        ifact[n] = fact[n].inv();
        for (int i = n; i >= 1; --i)
            ifact[i - 1] = ifact[i] * i;
    }
    mint nCk(int n, int k) {
        if (k < 0 || k > n) return 0;
        return fact[n] * ifact[k] * ifact[n - k];
    }
    mint nPk(int n, int k){
        return fact[n]*ifact[n-k];
    }
    mint factorial (int n){
        return fact[n];
    }
} c(1000009);
// c.nCk(100,10)　や c.nPk(M,N)などで使う
// 階乗は c.factorial(5) → 120

int main() {
    ll N, M;
    cin >> N >> M;
    cout << c.factorial(5) << endl;

    mint ans = c.nPk(M,N) * c.nPk(M,N); // 全パターン
    for(int i=1;i<=N;++i){
        mint now = c.nPk(M,N); // Aの配列の順列
        now *= c.nCk(N,i); // Bの配列N要素のうち、最低でもi箇所Aと一致する場所を決める
        now *= c.nPk(M-i,N-i); // i箇所以外の場所を自由に並べる（結果的にi箇所以上かぶっても良い）
        if(i&1) now = -now; // 包除原理
        ans += now;
    }
    cout << ans << endl;
}