#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
	ll H,N;
	cin >> H >> N;
  vector<ll> A(N);
	rep(i,N) cin >> A[i];
	if(accumulate(all(A),0) >= H){
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
}