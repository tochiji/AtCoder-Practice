#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
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
        if (n > 1) mp[n]++;
    };

    rep(i, N + 1) {
        decompositPrime(i, ps);
    }

    int over74 = 0;
    int over24 = 0;
    int over14 = 0;
    int over4  = 0;
    int over2  = 0;
    for (auto e : ps) {
        if (e.second >= 74) {
            over74++;
            over24++;
            over14++;
            over4++;
            over2++;
        } else if (e.second >= 24) {
            over24++;
            over14++;
            over4++;
            over2++;
        } else if (e.second >= 14) {
            over14++;
            over4++;
            over2++;
        } else if (e.second >= 4) {
            over4++;
            over2++;
        } else if (e.second >= 2)
            over2++;
    }
    cout << over74 + over24 * (over2 - 1) + over14 * (over4 - 1)
                + over4 * (over4 - 1) * (over2 - 2) / 2
         << endl;
}