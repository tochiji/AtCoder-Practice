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

int main() {
    int N;
    cin >> N;
    
    vec<string> S(2);
    rep(i, 2) cin >> S[i];

    mint ans = 1;
    rep(i,N){
        bool tate = S[0][i] == S[1][i];
        bool yoko = !tate;
        if(i==0 && tate){
            ans*=3;
            continue;
        } else if(i==0 && !tate){
            ans*=6;
            continue;
        }

        bool _tate =  S[0][i-1] == S[1][i-1];
        bool _yoko = !_tate;
        bool yokoyoko = yoko&&_yoko&&(S[0][i] == S[0][i-1]);
        if(_tate && tate){
            ans*=2;
        } else if(_tate && yoko){
            ans*=2;
        } else if(_yoko && tate){
            ans*=1;
        } else if(yokoyoko){
            ans*=1;
        } else if(_yoko&&yoko){
            ans*=3;
        }
    }
    cout << ans << endl;
}
