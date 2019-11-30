#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	ll A,B;
	cin >> A >> B;
	ll start=0;
	ll startValue = 0;

	if(A==B){

		cout << A << endl;
		return 0;

	}else if(A&1){
		start = B - ((B - A)%4);
		startValue = A;
	} else {
		start = B - ((B - (A+1))%4);
		startValue = 1;
	}

	ll x = startValue; 
  for(ll i=start+1;i<=B;i++){
		x = x^i;
	}
	cout << x << endl;
}