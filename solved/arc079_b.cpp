#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    ll k;
    cin >> k;
    ll a, b;
    a = k / 50;
    b = k % 50;
    cout << 50 << endl;
    for (int i = 0; i < 50; i++) {
        if(i<b) cout << 49 + a - b + 50 << " ";
        else cout << 49+a-b << " ";
    }
    cout << endl;
    return 0;
}
