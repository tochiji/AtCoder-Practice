#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int AB,BC,CA;
	cin >> AB >> BC >> CA;
	int mx = max({AB,BC,CA});
	if(AB == mx){
		cout << BC*CA /2  << endl;
	} else if(BC == mx){
		cout << CA*AB /2  << endl;
	} else{
		cout << AB*BC /2  << endl;
	}
}
