#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

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
    int N;
    cin >> N;
    Sieve sieve(1e6);
    map<int, int> s;
    for (int i = 2; i <= N; i++) {
        for (auto e : sieve.factor(i)) {
            s[e.first] += e.second;
        }
    }
    int over75 = 0;
    int over25 = 0;
    int over15 = 0;
    int over5  = 0;
    int over3  = 0;
    for (auto e : s) {
        if (e.second >= 74) over75++;
        if (e.second >= 24) over25++;
        if (e.second >= 14) over15++;
        if (e.second >= 4) over5++;
        if (e.second >= 2) over3++;
    }
    int ans = 0;
    ans += over75;
    ans += (over25) * (over3-1);
    ans += (over15) * (over5-1);
    ans += (over5)*(over5-1)*(over3-2)/2;
    cout << ans << endl;
}