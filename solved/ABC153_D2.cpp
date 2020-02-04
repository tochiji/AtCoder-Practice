#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

ll f(ll H) {
    if (H == 1) return 1;
    return f(H / 2) * 2 + 1;
}

int main() {
    ll H;
    cin >> H;
    cout << f(H) << endl;
}