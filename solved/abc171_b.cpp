#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N, K;
    cin >> N >> K;
    
    vec<int> p(N);
    rep(i, N) cin >> p[i];
    sort(all(p));
    int ans = 0;
    rep(i,K) ans+=p[i];
    cout << ans << endl;
}
