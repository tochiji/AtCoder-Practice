#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    ll K;
    cin >> K;
    ll now = 7;
    if (now % K == 0) {
        cout << 1 << endl;
        return 0;
    }

    rep(i, 10000000) {
        now *= 10;
        now += 7;
        if (now % K == 0) {
            cout << i+2 << endl;
            return 0;
        }
        now%=K;
    }
    cout << -1 << endl;
}
