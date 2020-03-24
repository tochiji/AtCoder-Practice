#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
	ll N;
	cin >> N;
	vector<ll> A(N);
	map<ll,ll> mp;
	rep(i,N){
		ll a;
		cin >> a;
		A[i] = a;
		mp[a]++;
	}
	ll mx = 0;
	for(auto e:mp) mx += e.second*(e.second-1)/2;
	rep(i,N){
		ll b = mp[A[i]];
		ll ans = mx - (b*(b-1)/2) + (b-1)*(b-2)/2;
		cout << ans << endl;
	}
}