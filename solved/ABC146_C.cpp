#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

ll countDigit(ll n) {
    ll digit = 1;
    while ((n /= 10) != 0)
        digit++;
    return digit;
}

int main() {
    ll A, B, X;
    cin >> A >> B >> X;
    ll mx = 1e9;
    ll mn = 0;

    while (mn != mx && (mx - mn) != 1) {
        ll p = (mx + mn) / 2;
        if (A * p + B * countDigit(p) < X) {
            mn = p;
        } else if (A * p + B * countDigit(p) > X) {
            mx = p;
        } else {
            cout << p << endl;
            return 0;
        }
    }

    if (A * mx + B * countDigit(mx) < X) {
        cout << mx << endl;
    } else {
        cout << mn << endl;
    }
}