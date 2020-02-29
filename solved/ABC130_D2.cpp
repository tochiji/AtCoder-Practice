#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> a(N + 1, 0);
    rep(i, N) cin >> a[i];
    ll ans = 0;
    ll tmp = a[0];
    int l = 0, r = 0;
    while (l <= N - 1 && r <= N - 1) {
        if (l == r) {
            if (tmp >= K) ans++;
            r++;
            tmp += a[r];
        } else if (l < r) {
            if (tmp >= K){
              ans+=(N-r);
              tmp -=a[l];
              l++;
            } else {
              r++;
              tmp += a[r];
            }
        }
    }
    cout << ans << endl;
}