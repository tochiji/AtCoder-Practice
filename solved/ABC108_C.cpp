#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	ll N,K;
	cin >> N >> K;
	ll ans = 0;
	if(K%2==1){
		ans = pow(N/K,3);
	} else {
		ll k = 0;
		ll k2 = 0;
		for(ll i=1;i<=N;i++){
			if(i%K == 0)k++;
			else if(i%K == K/2)k2++;
		}
		ans += pow(k,3);
		ans += pow(k2,3);
	}
	cout << ans << endl;
}