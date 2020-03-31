#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    ll L,R;
    cin >> L >> R;
    if(R-L >= 2019){
        cout << 0 << endl;
        return 0;
    }
    ll ans = 2018;
    for(ll l=L;l<R;++l)for(ll r=l+1;r<=R;++r){
        ans = min(ans,(l*r)%2019);
    }
    cout << ans << endl;
    cout << 2000000000 << endl;
    cout << (ll)2000000000*2000000000 << endl;
    cout << INT_MAX << endl;
    cout << INT64_MAX << endl;
}