#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	string S;
	cin >> S;
	int s = S.size()-1;
	int ans=0;
	rep(i,S.size()/2){
		if(S[i] != S[s-i])ans++;
	}
	cout << ans << endl;
}