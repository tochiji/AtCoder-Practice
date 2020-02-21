#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

#define DEBUG(x) cerr<<#x<<": "<<(x)<<endl

int main() {
    ll N, M;
    cin >> N >> M;
    vector<ll> A(N);
    rep(i,N) cin >> A[i];
    sort(all(A));
    vector<ll> Aa(N + 1);
    Aa[0]               = 0;
    rep(i, N) Aa[i + 1] = A[i] + Aa[i];

    ll l = 0, r = 1e10;
    ll ans = 0;

    while (r - l > 1) {
        ll c = (l + r) / 2;
        DEBUG(l);
        DEBUG(r);
        DEBUG(c);
        ll m = 0;
        ans  = 0;
        rep(i, N) {
            int index = lower_bound(all(A), c - A[i]) - A.begin();
            ans += (Aa[N] - Aa[index] + A[i] * (N - index));
            m += (N - index);
        }
        M > m ? (r = c) : (l = c); //握手が少ないなら、基準が高い。
        DEBUG(m - M);
        ans -= l * (m - M);
    }
    cout << ans << endl;
}