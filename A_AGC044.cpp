#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

ll N, A, B, C, D;
vec<ll> X(6, 0);

void dfs(ll x, ll money, ll &ans, map<ll,ll> &mp) {
    if (money > ans) return;
    ans = min(ans, money + abs(N - x) * X[1]);
    if(mp[x] == 0){
        mp[x] = ans;
    } else if(mp[x] < ans){
        return;
    } else {
        mp[x] = ans;
    }
    if (x > N || x == 0) return;
    for (auto e : {5,3,2}) {
        dfs(x * e, money + X[e], ans, mp);
        dfs((x + 1) * e, money + X[1] + X[e], ans, mp);
        dfs((x - 1) * e, money + X[1] + X[e], ans, mp);
    }
}

int main() {
    int T;
    cin >> T;
    rep(i, T) {
        cin >> N >> X[2] >> X[3] >> X[5] >> X[1];
        ll ans = X[1] * N;
        map<ll,ll> mp;
        dfs(1, X[1], ans, mp);
        cout << ans << endl;
    }
}