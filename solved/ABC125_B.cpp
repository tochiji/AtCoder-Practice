#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> V(N);
	rep(i,N) cin >> V[i];
	vector<int> C(N);
	rep(i,N) cin >> C[i];

	int ans = 0;
	rep(i,N){
		if(V[i] - C[i] >0) ans += (V[i] - C[i]);
	}
	cout << ans << endl;
}