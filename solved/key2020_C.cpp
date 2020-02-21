#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N,K,S;
	cin >> N >> K >> S;
  rep(i,K){
		cout << S << " ";
	}

	int zan = N-K;
	if(S != (int)1e9){
		rep(i,zan) cout << (int)1e9 << " ";
	} else {
		rep(i,zan) cout << 1 << " ";
	}
	cout << endl;
}