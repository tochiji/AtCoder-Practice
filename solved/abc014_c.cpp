#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int n;
    cin >> n;
    vec<ll> a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];
    vec<ll> A(1e7);
    rep(i, n) {
        ++A[a[i]];
        --A[b[i] + 1];
    }
    rep(i, (int)1e7-1) A[i + 1] += A[i];
    ll ans = 0;
    rep(i, (int)1e7) ans = max(ans, A[i]);
    cout << ans << endl;
}
