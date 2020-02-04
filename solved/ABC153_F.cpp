#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    ll N, D, A;
    cin >> N >> D >> A;
    D = D * 2;
    vector<pair<int, int>> m(N);
    rep(i, N) cin >> m[i].first >> m[i].second;
    sort(all(m));

    ll ans = 0;
    ll dmg = 0;
    queue<pair<ll, ll>> q;
    rep(i, N) {
        while (!q.empty() && m[i].first > q.front().first) {
            dmg -= q.front().second;
            q.pop();
        }
        ll cnt = max((m[i].second - dmg + A - 1) / A ,0LL);
				ans += cnt;
        dmg += cnt * A;
        q.push({m[i].first + D, cnt * A});
    }

    cout << ans << endl;
}