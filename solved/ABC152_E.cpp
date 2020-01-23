#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

const ll MOD = 1000000007;

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
        mint a = pow(t >> 1);
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

struct Sieve {
    int n;
    vector<int> f, primes;
    Sieve(int n = 1) : n(n), f(n + 1) {
        f[0] = f[1] = -1;
        for (ll i = 2; i <= n; ++i) {
            if (f[i]) continue;
            primes.push_back(i);
            f[i] = i;
            for (ll j = i * i; j <= n; j += i) {
                if (!f[j]) f[j] = i;
            }
        }
    }
    bool isPrime(int x) {
        return f[x] == x;
    }
    vector<int> factorList(int x) {
        vector<int> res;
        while (x != 1) {
            res.push_back(f[x]);
            x /= f[x];
        }
        return res;
    }
    vector<pair<int, int>> factor(int x) {
        vector<int> fl = factorList(x);
        if (fl.size() == 0) return {};
        vector<pair<int, int>> res(1, pair<int, int>(fl[0], 0));
        for (int p : fl) {
            if (res.back().first == p) {
                res.back().second++;
            } else {
                res.emplace_back(p, 1);
            }
        }
        return res;
    }
};

int main() {
    Sieve sieve(1e6);
    ll N;
    cin >> N;
    vector<ll> A(N);
    rep(i, N) cin >> A[i];

		map<int,int> mp;
		rep(i,N){
			auto f = sieve.factor(A[i]);
			for(auto p:f){
				mp[p.first] = max(mp[p.first],p.second);
			}
		}

		mint lcm = 1;
		for(auto p:mp){
			rep(i,p.second){
				lcm *= p.first;
			}
		}

		mint ans;
		rep(i,N){
			mint b = lcm/A[i];
			ans += b;
		}

		cout << ans.x << endl;
}