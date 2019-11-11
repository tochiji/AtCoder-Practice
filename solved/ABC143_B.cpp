#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> d(N);
	rep(i,N) cin >> d[i];

	int ans = 0;
	rep(i,N)rep(k,i){
		ans += d[i]*d[k];
	}
	cout << ans << endl;
}
