#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

const ll MOD = 1000000007;
template <typename T>
using vec = std::vector<T>;

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
    vec<mint> AA(101, 0);
    vec<mint> AC(101, 0);
    vec<mint> AG(101, 0);
    vec<mint> AT(101, 0);
    vec<mint> CA(101, 0);
    vec<mint> CC(101, 0);
    vec<mint> CG(101, 0);
    vec<mint> CT(101, 0);
    vec<mint> GA(101, 0);
    vec<mint> GC(101, 0);
    vec<mint> GG(101, 0);
    vec<mint> GT(101, 0);
    vec<mint> TA(101, 0);
    vec<mint> TC(101, 0);
    vec<mint> TG(101, 0);
    vec<mint> TT(101, 0);
    AA[2] = 1;
    AC[2] = 1;
    AG[2] = 1;
    AT[2] = 1;
    CA[2] = 1;
    CC[2] = 1;
    CG[2] = 1;
    CT[2] = 1;
    GA[2] = 1;
    GC[2] = 1;
    GG[2] = 1;
    GT[2] = 1;
    TA[2] = 1;
    TC[2] = 1;
    TG[2] = 1;
    TT[2] = 1;
    for (int i = 2; i <= 99; ++i) {
        AA[i + 1] = AA[i] + CA[i] + GA[i] + TA[i];
        AC[i + 1] = AA[i] + CA[i] + TA[i];
        AG[i + 1] = AA[i] + CA[i] + GA[i] + TA[i];
        AT[i + 1] = AA[i] + CA[i] + GA[i] + TA[i];
        CA[i + 1] = AC[i] + CC[i] + GC[i] + TC[i];
        CC[i + 1] = AC[i] + CC[i] + GC[i] + TC[i] - AG[i - 1];
        CG[i + 1] = CC[i] + GC[i] + TC[i];
        CT[i + 1] = AC[i] + CC[i] + GC[i] + TC[i];
        GA[i + 1] = AG[i] + CG[i] + GG[i] + TG[i];
        GC[i + 1] = CG[i] + GG[i] + TG[i] - AG[i - 1];
        GG[i + 1] = AG[i] + CG[i] + GG[i] + TG[i];
        GT[i + 1] = AG[i] + CG[i] + GG[i] + TG[i];
        TA[i + 1] = AT[i] + CT[i] + GT[i] + TT[i];
        TC[i + 1] = AT[i] + CT[i] + GT[i] + TT[i] - AG[i - 1];
        TG[i + 1] = AT[i] + CT[i] + GT[i] + TT[i];
        TT[i + 1] = AT[i] + CT[i] + GT[i] + TT[i];
    }
    mint ans = AA[N] + AC[N] + AG[N] + AT[N] + CA[N] + CC[N] + CG[N] + CT[N]
               + GA[N] + GC[N] + GG[N] + GT[N] + TA[N] + TC[N] + TG[N] + TT[N];
    cout << ans << endl;
}