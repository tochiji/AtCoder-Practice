#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    ll N,K;
    cin >> N >> K;
    vector<ll> A(N);
    vector<ll> F(N);
    rep(i,N) cin >> A[i];
    rep(i,N) cin >> F[i];
    sort(all(A));
    sort(all(F),greater<ll>());
    ll mx = (ll)1e12;
    rep(i,N) mx = max(mx,A[i]*F[i]);
    ll l = -1; ll r = mx;
    while(l<r-1){
        ll t = (l+r)/2;
        ll k = K;
        bool flag = true;
        rep(i,N){
            if(A[i]*F[i]>t) k-=(A[i]-(t/F[i]));
            if(k<0){
                flag = false;
                break;
            }
        }
        if(flag) r = t;
        else l = t;
    }
    cout << r << endl;
}