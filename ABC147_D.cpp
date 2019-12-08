#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	ll N;
	cin >> N;
  vector<ll> A(N);
	rep(i,N)cin >> A[i];
	ll ans = 0;

	ll allxor = 0;
	rep(i,N){
		allxor = allxor^A[i];
	}

	rep(i,N){
		ans += (A[i]*(N-1));
		ans %= (ll)1e9+7;
	}
	cout << ((ll)ans) << endl;

	ans = 0;
	rep(i,N)rep(k,i){
		// cout << bitset<4>(A[k]) << " " << bitset<4>(A[i]) << " ";
		// cout << bitset<4>(A[k]^A[i]) << endl;
		// cout << (A[k]^A[i]) << endl << endl;
		ans+=A[k]^A[i];
		ans %= (ll)1e9+7;
	}
	cout << (ll)ans << endl;
}