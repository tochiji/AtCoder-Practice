#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;
    
    ll ans    = 1;
    bool flag = true;
    rep(i, N) {
        ll A;
        cin >> A;
        if (A == 0) {
            cout << 0 << endl;
            return 0;
        }

        if (ans > (ll)1e18 / A) flag = false;
        else
            ans *= A;
    }
    cout << (flag ? (ll)ans : -1) << endl;
}
