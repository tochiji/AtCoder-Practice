#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

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
    string L;
    cin >> L;
    int N = L.size();
    vector<vector<mint>> dp(N + 1, vector<mint>(2, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= N; ++i) {
        int l = L[i - 1] - '0';
        if (l == 0) {
            dp[i][0] = dp[i - 1][0];
            dp[i][1] = dp[i - 1][1] * 3;
                //(0,0),(0,1),(1,0),(1,1)のうち、
                // (1,1)は A=B とAxorBが一致する条件に反するので3を掛ける
        } else {
            dp[i][0] = dp[i - 1][0] * 2;
            dp[i][1] = dp[i - 1][1] * 3 + dp[i - 1][0];
        }
    }
    cout << dp[N][0] + dp[N][1] << endl;
}