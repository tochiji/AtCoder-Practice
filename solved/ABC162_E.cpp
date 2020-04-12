#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;


#define debug(x) cout << #x << "=" << x << endl;
#define vdebug(v) { cout << #v << "=" << endl; rep(i_debug, v.size()) { cout << v[i_debug] << ",";}cout << endl; }
#define mdebug(m) { cout << #m << "=" << endl; rep(i_debug, m.size()) { rep(j_debug, m[i_debug].size()) { cout << m[i_debug][j_debug] << ","; } cout << endl; } }

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

int main() {
    int N,K;
    cin >> N >>K;
    mint ans(K);
    ans = ans.pow(N);
    vector<mint> yaku(K+1,0);

    for(int i=K;i>=2;--i){
        mint cnt(K/i);
        yaku[i] = cnt.pow(N);
        for(int j=2;i*j<=K;++j){
            yaku[i]-=yaku[i*j];
        }
        ans += (yaku[i]*(i-1));
    }
    
    cout << ans << endl;
}
