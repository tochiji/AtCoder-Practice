#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N,T,A;
	cin >> N >> T >> A;
	vector<double> H(N);
	rep(i,N) cin >> H[i];

	double mn = 99999;
	int index = 1000;
	rep(i,N){
		double diff = abs(A - (T - H[i] * 0.006));
		mn = min(mn,diff);
		if(mn == diff) index = i;
	}
	cout << index + 1 << endl;
}