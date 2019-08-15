#include <bits/stdc++.h>
#define rep(i, n) for (int(i) = 0; (i) < (n); (i)++)
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    ll g = gcd(a, b);
    return (a / g) * b;
}

int main() {
    ll A = 0;
    ll B = 0;
    ll C = 0;
    ll D = 0;
    cin >> A >> B >> C >> D;

    ll CDlcm =  lcm(C, D);

    ll underAperC = (A-1) / C;
    ll underBperC = B / C;

    ll underAperD = (A-1) / D;
    ll underBperD = B / D;

    ll underAperlcm = (A-1) / CDlcm;
    ll underBperlcm = B / CDlcm;

    ll underperC = underBperC - underAperC;
    ll underperD = underBperD - underAperD;
    ll underLcm = underBperlcm - underAperlcm;

    ll Count = B - A + 1;
    ll ans = Count - (underperC + underperD - underLcm);

    cout << ans << endl;
}