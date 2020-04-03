#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    ll N,K;
    cin >> N >> K;
    vector<ll> a(N);
    rep(i,N) cin >> a[i];
    
    ll ans = 0;
    ll sm = a[0];
    int l = 0;
    int r = 0;

    while(l <= N-1 && r <= N-1){
        if(sm>=K){
            ans += N - r;
            if(r==l){
                sm-=a[l];
                ++r,++l;
                sm+=a[r];
            } else {
                sm-=a[l];
                l++;
            }
        }else{
            ++r;
            sm+=a[r];
        }
    }
    cout << ans << endl;
}