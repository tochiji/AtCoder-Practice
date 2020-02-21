#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int a,b;
	cin >> a >> b;
  ll A = 0;
	ll B = 0;
	rep(i,b){
		A = A*10;
		A = A+ a;
	}
	rep(i,a){
		B = B*10;
		B = B +b;
	}

	cout << max(A,B) << endl;
}