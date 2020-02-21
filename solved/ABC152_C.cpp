#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N;
	cin >> N;
  vector<int> P(N);
	rep(i,N) cin >> P[i];
	vector<int> mns(N);
	mns[0] = P[0];
	for(int i=1;i<N;i++){
		mns[i] = min(mns[i-1],P[i]);
	}
	int ans = 0;
	rep(i,N){
		if(mns[i] >= P[i]) ans++;
	}
	cout << ans << endl;
}