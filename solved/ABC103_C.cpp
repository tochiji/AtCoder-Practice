#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    ll N;
    cin >> N;
    vector<ll> a(N);
    rep(i,N) cin >> a[i];
    int ans = 0;
    rep(i,N) ans += (a[i]-1);
    cout << ans << endl;
}