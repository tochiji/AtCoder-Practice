#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
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


// main内で、「Sieve sieve(1e6);」等で初期化
//
// こうやって使う
//  for(auto e:sieve.factor(2020)){
//            cout << e.first << " " << e.second << endl;
//  }
// ↓
// 2 2
// 5 1
// 101 1
//

int main() {
    Sieve sieve(1e6);

    int N = 935037; // < 1e6
    cout << N << " = " << endl;
    for(auto [e0,e1]:sieve.factor(N)){
           cout << e0 << " x " << e1 << endl;
    }
}