#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    ll H,W;
    cin >> H>>W;
    if(H ==1 || W == 1){
        cout << 1 << endl;
        return 0;
    }
    vector<ll> ws = {(W+1)/2,W/2};
    ll ans = 0;
    ans += ws[0]*((H+1)/2);
    ans += ws[1]*(H/2);
    
    cout << ans << endl;
}