#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	ll N;
	cin >> N;
  
	ll rootN = sqrt(N);
	for(ll i = rootN;i>0;i--){
		ll amari = N % i;
		ll syou = N / i;
		bool ok = (amari == 0);
		if(ok){
			cout << i+syou -2 << endl;
			return 0;
		}
	}
}