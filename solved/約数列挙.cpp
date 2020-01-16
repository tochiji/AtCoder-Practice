#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
#define debug(x) cout << #x << "=" << x << endl;
#define vdebug(v) \
    { \
        cout << #v << "=" << endl; \
        rep(i_debug, v.size()) { \
            cout << v[i_debug] << ","; \
        } \
        cout << endl; \
    }
#define mdebug(m) \
    { \
        cout << #m << "=" << endl; \
        rep(i_debug, m.size()) { \
            rep(j_debug, m[i_debug].size()) { \
                cout << m[i_debug][j_debug] << ","; \
            } \
            cout << endl; \
        } \
    }
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;

    map<int, int> ps;
    auto decompositPrime = [&](int n, map<int, int> &mp) {
        int a = 2;
        while (n >= a * a) {
            if (n % a == 0) {
                mp[a]++;
                n /= a;
            } else {
                a++;
            }
        }
        if (n != 1) mp[n]++;
    };

    decompositPrime(N, ps);

    for (auto e : ps) {
        cout << e.first << "×" << e.second << endl;
    }
    cout << ps.size() << endl;
}