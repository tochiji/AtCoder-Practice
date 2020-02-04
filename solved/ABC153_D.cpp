#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
	ll H;
	cin >> H;

	ll p = 0;
	for(ll i=0;pow(2,i)<=H;i++){
		p = pow(2,i+1);
	}
    cout << p - 1 << endl;
}