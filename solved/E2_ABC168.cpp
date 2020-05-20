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
    mint zero = 0;
    map<pair<ll, ll>, ll> mp;
    rep(i, N) {
        ll A, B;
        cin >> A >> B;
        if (A == 0 && B == 0) {
            zero = zero + 1;
            continue;
        }
        if (A == 0) {
            ++mp[{0, -1}];
            continue;
        } else if (B == 0) {
            ++mp[{1, 0}];
            continue;
        }

        ll g = abs(gcd(A, B));
        if ((A > 0 && B > 0) || (A < 0 && B < 0)) {
            ++mp[{abs(A) / g, abs(B) / g}];
        } else {
            ++mp[{abs(A) / g, -abs(B) / g}];
        }
    }

    mint ans = 1;
    map<pair<ll, ll>, bool> visited;
    for (auto [p, count] : mp) {
        ll A = p.first;
        ll B = p.second;
        if (count == 0 || visited[{A, B}]) {
            continue;
        }
        
        ll VS = ((B>=0)?mp[{B,-A}]:mp[{-B,A}]);
        if (B >= 0) {
            visited[{A, B}] = visited[{B, -A}] = true;
        } else {
            visited[{A, B}] = visited[{-B, A}] = true;
        }

        mint c1 = mint(2).pow(count) - 1;
        mint c2 = mint(2).pow(VS) - 1;
        ans *= (c1 + c2 + 1);
    }
    cout << ans - 1 + zero << endl;
}
