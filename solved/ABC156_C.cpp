#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> X(N);
	rep(i,N) cin >> X[i];
	int ans = 1e9+7;
  for(int p=1;p<=100;p++){
		int sm = 0;
		rep(i,N){
			sm += (X[i]-p)*(X[i]-p);
		}
		ans = min(ans,sm);
	}
	cout << ans << endl;
}