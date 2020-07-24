#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;
    
    vec<ll> a(N);
    rep(i, N) cin >> a[i];
    rep(i,N-1) a[i+1]+=a[i];

    ll ans = 1e14+7;
    rep(i,N-1){
        ans = min(ans,abs(a[i]-(a[N-1]-a[i])));
    }
    cout << ans << endl;
}
