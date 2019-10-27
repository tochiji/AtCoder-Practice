#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int a, b, x;
	cin >> a >> b >> x;
	double area = (double)x/a;
	double c = ((double)x / a) / a;
	double at = 0.0;

	cout << fixed << setprecision(9);

	if(c > b/2){
		double xx = (double)2*b - ((2 * area) / a);
		at = atan(a/xx);
		cout << 90- 360.0 * at / (3.14159265358979 * 2) << endl;
	} else {
		double xx = 2* area / b;
		at = atan(xx/b);
		cout << 90 - 360.0 * at / (3.14159265358979 * 2) << endl;
	}	
}