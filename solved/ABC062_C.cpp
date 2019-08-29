#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    ll H, W;
    cin >> H >> W;

    ll ans = 999999;
    rep(h, H) {
        ll A   = h * W;
        ll B1  = ((H - h) / 2) * W;
        ll C1  = H * W - (A + B1);
        ll mn1 = max({A, B1, C1}) - min({A, B1, C1});

        ll B2  = (H - h) * (W / 2);
        ll C2  = H * W - (A + B2);
        ll mn2 = max({A, B2, C2}) - min({A, B2, C2});

        ans = min({ans, mn1, mn2});
    }

    rep(w, W) {
        ll A   = H * w;
        ll B1  = H * ((W - w) / 2);
        ll C1  = H * W - (A + B1);
        ll mn1 = max({A, B1, C1}) - min({A, B1, C1});

        ll B2  = (H / 2) * (W - w);
        ll C2  = H * W - (A + B2);
        ll mn2 = max({A, B2, C2}) - min({A, B2, C2});

        ans = min({ans, mn1, mn2});
    }

    cout << ans << endl;
}