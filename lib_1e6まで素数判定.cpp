#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

struct Sieve {
    int n;
    vector<int> f;
    Sieve(int n = 1) : n(n), f(n + 1) {
        f[0] = f[1] = -1;
        for (ll i = 2; i <= n; ++i) {
            if (f[i]) continue;
            f[i] = i;
            for (ll j = i * i; j <= n; j += i) {
                if (!f[j]) f[j] = i;
            }
        }
    }
    bool isPrime(int x) {
        return f[x] == x;
    }
};


// main内で、「Sieve sieve(1e6);」等で初期化
//
// こうやって使う
//  sieve.isPrime(2020) // true or false
//

int main() {
    Sieve sieve(1e6);

    int N = 935037; // < 1e6
    cout << sieve.isPrime(1) << endl; // 0 (false)
    cout << sieve.isPrime(2) << endl; // 1 (true)
    cout << sieve.isPrime(3) << endl; // 1 (true)
    cout << sieve.isPrime(19) << endl; // 1 (true)
    cout << sieve.isPrime(2000) << endl; // 0 (false)
}