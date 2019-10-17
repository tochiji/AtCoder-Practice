#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;
 
int main() {
	ll A,B;
	cin >> A >> B;
  ll g = __gcd(A,B);

	int ans = 0;
	for(ll i=2;i*i<=g;i++){
		if(g%i == 0){
			ans++;
			while(g%i==0)g/=i;
		}
	}
	// gが1でない場合（割り切れていない場合）は、
	// 「√g（i*i<=g）」以上の素数が割り切られず
	// 残っているということになるので
	if(g!=1) ans++;

	// 上の計算では「1」が約数から抜けているので
	cout << ans + 1 << endl;
}