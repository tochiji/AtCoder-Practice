#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
	int N,R;
	cin >> N >> R;
	int naibu;
	if(N>=10){
		cout << R << endl;
	} else {
		cout << R + 100* (10-N) << endl;
	}
}