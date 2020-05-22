#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N = 1e9+2745187;

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
 
    cout << N << " = " << endl;
    for (auto [e0,e1] : ps) {
        cout << e0 << " × " << e1 << endl;
    }
}