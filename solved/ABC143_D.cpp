#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> L(N);
	rep(i,N) cin >> L[i];

  sort(all(L));
	int ans = 0;
	rep(a,N)rep(b,a){
		int index = lower_bound(all(L),L[a]-L[b]+1) - L.begin();
		ans += max(b - index,0);
	}
	cout << ans << endl;
}