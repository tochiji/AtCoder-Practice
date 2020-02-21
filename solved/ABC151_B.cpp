#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N,K,M;
	cin >> N >> K >>M;
	vector<int> A(N-1);
	rep(i,N-1) cin >> A[i];
  int sum = accumulate(all(A),0);
	rep(i,K+1){
		if((sum+i)/N >= M){
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
}