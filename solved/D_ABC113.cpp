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
    int H, W, K;
    cin >> H >> W >> K;
    --K;
    if(W==1) {
        cout << 1 << endl;
        return 0;
    }
    vec<vec<int>> to(W, vec<int>(W, 0));

    rep(i, 1 << (W - 1)) {
        bool flag = true;
        for (int j = 1; j <= W - 1; ++j){
            bool a = (i>>j) & 1;
            bool b = (i>>(j-1)) & 1;
            if ( a && b ) flag = false;
        }
        if (!flag) continue;

        rep(j, W-1) {
            if (i & (1 << j)) {
                to[j][j + 1] += 1;
                to[j + 1][j] += 1;
            } else {
                if(j==0) to[j][j] += 1;
                else if (!(i & (1 << (j-1)))) to[j][j] += 1;
                if(j==W-2) to[j+1][j+1]+=1;
            }
        }
    }

    vec<vec<mint>> dp(H + 1, vec<mint>(W, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= H; ++i)
        rep(j, W) {
            dp[i][j] += dp[i - 1][j] * to[j][j];
            if (j + 1 < W) dp[i][j] += dp[i - 1][j + 1] * to[j + 1][j];
            if (j != 0) dp[i][j] += dp[i - 1][j - 1] * to[j - 1][j];
        }

    cout << dp[H][K] << endl;
}