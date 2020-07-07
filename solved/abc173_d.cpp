#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    ll N;
    cin >> N;
    
    vec<ll> A(N);
    rep(i, N) cin >> A[i];
    sort(all(A),greater<ll>());
    
    ll ans = 0;
    for(int i=1;i<N;++i){
        ans+=A[i/2];
    }
    cout << ans << endl;
}
