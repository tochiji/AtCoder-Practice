#include <bits/stdc++.h>
#define rep(i, n) for (int(i) = 0; (i) < (n); (i)++)
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){ return b ? gcd(b, a%b) : a;}

ll solve(ll n, ll C, ll D) {
    ll lcm = C / __gcd(C, D) * D;
    return n - (n / C) + (n / D) - n / lcm;
}

int main() {
    ll A = 0;
    ll B = 0;
    ll C = 0;
    ll D = 0;
    cin >> A >> B >> C >> D;

    ll Count = B - A + 1;
    ll ans   = Count - (solve(B,C,D) - solve(A-1,C,D));

    cout << ans << endl;
}