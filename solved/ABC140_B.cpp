#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N;
	cin >> N;
  vector<int> A(N);
  vector<int> B(N);
  vector<int> C(N-1);
	rep(i,N) cin >> A[i];
	rep(i,N) cin >> B[i];
	rep(i,N-1) cin >> C[i];

	int ans = 0;
	rep(i,N){
 		ans += B[i];
		if(i == 0) continue;
		if(A[i] - A[i-1] == 1){
			ans+=C[A[i-1]-1];
		}
	}
	cout << ans << endl;
}