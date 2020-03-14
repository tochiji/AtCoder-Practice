#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    ll a,b,c;
    cin >> a >> b >> c;

    ll r = (c - a -b);
    if( r <=0) {
        cout << "No" << endl;
        return 0;
    }
    ll r2 = r * r;
    ll l2 = 4*a*b;

    if(l2 < r2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}