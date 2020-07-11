#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    ll N, K;
    cin >> N >> K;
    vec<ll> s(N);
    rep(i, N) {
        cin >> s[i];
        if(s[i] == 0) {
            cout << N << endl;
            return 0;
        }
    }
    int u = 0, d = 0;

    ll nowK   = 1;
    ll tmpans = 0;
    ll ans    = 0;
    while (d < N) {
        if (u == d && s[u] <= K) {
            nowK = s[u];
            ++d;
            tmpans = 1;
            ans = max(ans, tmpans);
        } else if (u == d && s[u] > K) {
            ++u, ++d;
            tmpans = 0;
            nowK = 1;
        } else if (nowK * s[d] <= K) {
            nowK *= s[d];
            ++d;
            ++tmpans;
            ans = max(ans, tmpans);
        } else if (nowK * s[d] > K) {
            nowK/=s[u];
            ++u;
            --tmpans;
        }
    }

    cout << ans << endl;
}
