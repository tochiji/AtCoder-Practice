#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

// オーバーフローしていたらtrue
bool checkOverflow(ll a, ll b) {
    ll MAX = (ll)1e18;
    return (a > MAX / b)?true:false;
}

int main() {
    ll A = 1e10;
    ll B = 1e10;
    if (checkOverflow(A, B)) {
        cout << "オーバーフローしてます" << endl;
    } else {
        cout << "オーバーフローしてません" << endl;
    }

    ll C = 1e9;
    ll D = 1e9;
    if (checkOverflow(C, D)) {
        cout << "オーバーフローしてます" << endl;
    } else {
        cout << "オーバーフローしてません" << endl;
    }

    ll E = 1e9;
    ll F = 1e9+1;
    if (checkOverflow(E, F)) {
        cout << "オーバーフローしてます" << endl;
    } else {
        cout << "オーバーフローしてません" << endl;
    }
}
