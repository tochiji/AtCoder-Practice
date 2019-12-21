#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<ll> x(N);
    rep(i, N) cin >> x[i];
    int zero_i = lower_bound(all(x), 0) - x.begin();

    ll ans = 1e14;
    rep(l, N - K + 1) {
        ll tmp_ans = 0;
        int r      = l + K - 1;
        tmp_ans    = min(abs(x[l]) + abs(x[l] - x[r]),
                      abs(x[r]) + abs(x[r] - x[l]));
        ans        = min(ans, tmp_ans);
    }
    cout << ans << endl;
}