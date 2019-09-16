#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N;
	cin >> N;
  vector<int> B(N-1);
	rep(i,N-1) cin >> B[i];
	int ans = 0;
	rep(i,N){
		if(i == 0){
			ans += B[i];
		} else if(i == N-1){
			ans += B[i-1];
		} else {
			ans += min(B[i],B[i-1]);
		}
	}
	cout << ans << endl;
}