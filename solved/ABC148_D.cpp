#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N;
	cin >> N;
  vector<int> a(N);
	rep(i,N) cin >> a[i];
	int next = 1;
	int ans = 0;
	rep(i,N){
		if(a[i] == next) next++;
		else ans++;
	}
	cout << ((next == 1) ? -1 : ans) << endl;
}