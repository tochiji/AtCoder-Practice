#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    ll N, M;
    cin >> N >> M;

    ll ans = 1;
    for (ll i = M / N; i >= ans; i--) {
        if (M % i != 0) continue;
        ll amari = M - (i * N);
        ll g     = gcd(i, i + amari);
        ans = max(ans, g);
    }
    cout << ans << endl;
}