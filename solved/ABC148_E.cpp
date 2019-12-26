#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    ll N;
    cin >> N;
		ll ans = 0;
		if(N%2 == 1){
			cout << ans << endl;
			return 0;
		}

    for (ll f = 10;f<=N;f*=5) {
			ans += N/f;
    }
		cout << ans << endl;
}