#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    ll N;
    cin >> N;
    vec<ll> a(N);
    rep(i,N) cin >> a[i];
    a.push_back(0);

    ll l = 0;
    ll r = 0;
    ll ans = 0;
    while(l<N){
        if(l == r){
            ++r;
        } else if(a[r-1] >= a[r]){
            ans+=((r-l+1)*(r-l)/2);
            l=r;
        } else if(a[r-1]<a[r] && r != N-1){
            ++r;
        } else if(a[r-1]<a[r] && r == N-1){
            ans+=((r-l+2)*(r-l+1)/2);
            break;
        }
    }
    cout << ans << endl;
}
