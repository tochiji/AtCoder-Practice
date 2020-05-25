#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

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
    int Q;
    cin >> Q;
    Sieve sieve(1e6);
    vec<int> S((int)1e5+1,0);
    for(int i=3;i<=100000;i+=2){
        bool c1 = (sieve.isPrime(i));
        bool c2 = (sieve.isPrime((i+1)/2)) ;
        if(c1&&c2) S[i]=1;
        S[i-1] += S[i-2];
        S[i] += S[i-1];
    }
    rep(i,Q){
        int l,r;
        cin >> l >> r;
        cout << S[r]-S[l-1] << endl;
    }
}