#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int n, m;
    cin >> n >> m;
    vec<ll> d(n),a(m);
    rep(i,n-1) cin >> d[i];
    rep(i,m) cin >> a[i];
    rep(i,n-1) d[i+1] += d[i];
    d.insert(d.begin(),0);

    int now = 0;
    ll ans = 0;
    rep(i,m){
      int next = now + a[i];
      ans += abs(d[next]-d[now]);
      ans%=(ll)(1e5);
      now = next;
    }
    cout << ans << endl;
}
