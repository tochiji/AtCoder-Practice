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
    vec<map<string, mint>> dp(101, map<string, mint>());
    map<string, bool> mp;
    string S = "ACGT";
    smatch smatch;
    for (auto i : S)
        for (auto j : S)
            for (auto k : S)
                for (auto l : S) {
                    string s = "";
                    s += i;
                    s += j;
                    s += k;
                    s += l;
                    dp[0][s] = 0;
                    mp[s] =
                        regex_search(s, smatch, regex("AGC|ACG|GAC|A.GC|AG.C"));
                }
    dp[0]["TTTT"] = 1;

    ll now = 0;
    for (int i = 0; i < 100; ++i)
        for (auto d : dp[i]) {
            string ds = d.first;
            for (auto e : S) {
                ++now;
                string s = ds.substr(1) + e;
                if (!mp[s])
                    dp[i + 1][s] += dp[i][ds];
                else
                    dp[i + 1][s] = 0;
            }
        }

    mint ans = 0;
    for (auto e : dp[N]) {
        ans += e.second;
    }
    cout << ans << endl;
}