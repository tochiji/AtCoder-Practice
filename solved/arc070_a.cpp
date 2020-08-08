#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int X;
    cin >> X;
    ll now = 0;
    ll i   = 1;
    while (true) {
        now += i;
        if (now >= X) {
            cout << i << endl;
            return 0;
        }
        ++i;
    }
}
