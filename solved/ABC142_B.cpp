#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N,K;
	cin >> N >>K;
			int ans = 0;
	rep(i,N){
		int h;
		cin >> h;
		if(h>=K) ans++;
	}
	cout << ans << endl;
}