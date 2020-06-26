#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    ll D, N, M;
    cin >> D >> N >> M;
    vec<ll> d(N+1);
    d[0] = 0;
    rep(i, N - 1) cin >> d[i + 1];
    d[N] = D;
    sort(all(d));

    ll ans = 0;
    rep(i, M) {
        int k;
        cin >> k;
        int index = lower_bound(all(d),k) - d.begin();
        if(index == 0 || index == N+1) continue;
        ans += min(abs(d[index] - k),abs(d[index-1] - k));
    }
    cout << ans << endl;
}
