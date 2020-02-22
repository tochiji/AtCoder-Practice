#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

const ll MOD = 1e9 + 7;

struct mint {
    ll x;  // cout << ans.x << endl; で出力する
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

int main() {
    ll n, a, b;
    cin >> n >> a >> b;
    mint t   = 2;
    mint ans = t.pow(n).x;
    mint now = 1;
    mint ma, mb = 0;
    for (int i = 1; i <= b; i++) {
        now = now * (n - i + 1);
        now /= i;
        if (i == a) ma = now;
        if (i == b) mb = now;
    }
    ans = ans - ma - mb - 1;
    cout << ans.x << endl;
}