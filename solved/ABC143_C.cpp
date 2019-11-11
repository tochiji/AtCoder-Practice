#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N;
	cin >> N;
	string S;
	cin >> S;
	int ans = 0;
	char before = '@';
	rep(i,N){
		if(S[i] != before) ans++;
		before = S[i];
	}
	cout << ans << endl;
}