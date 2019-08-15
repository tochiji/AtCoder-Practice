#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

ll L, R;

int main() {
    cin >> L >> R;

    if ((R - L) >= 2019) {
        cout << 0 << endl;
        return 0;
    }

    ll N   = R - L + 1;
    ll ans = 2019;

    for(ll l=L;l<R;l++){
      for(ll r=L+1;r<=R;r++){
        if(l==r) continue;
        ans = min(ans,l*r % 2019);
      }
    }

    cout << ans << endl;
}