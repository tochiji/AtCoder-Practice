#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> H(N);
    rep(i, N) cin >> H[i];
		sort(all(H));

		ll ans = 0;
		rep(i,N-K){
			ans+=H[i];
		}
		cout << ans << endl;
}