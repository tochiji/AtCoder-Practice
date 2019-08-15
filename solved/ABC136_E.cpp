#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<ll> A(N);
    rep(i, N) cin >> A[i];

    ll sum = 0;
    rep(i, N) sum += A[i];
    set<ll> candidates;
    for (int i = 1; i + i <= sum; i++) {
        if (sum % i == 0) {
            candidates.insert(i);
            candidates.insert(sum / i);
        }
    }
    ll ans = 1;
    for (ll x : candidates) {
        ll need;
        {
            vector<ll> r(N);
            rep(i, N) r[i] = A[i] % x;
            sort(all(r));
            ll tot = 0;
            rep(i, N) tot += r[i];
            int l = N - tot / x;
            need  = 0;
            rep(i, l) need += r[i];
        }
        if (need <= K) ans = max(ans, x);
    }
    cout << ans << endl;
}