#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	string S;
	cin >> S;
  int len = S.size();
	bool ans = true; 
	rep(i,len){
		if(i&1 && S[i] == 'R'){
			ans = false;
		} else if(!(i&1) && S[i] == 'L'){
			ans = false;
		} else {
			continue;
		}
	}
	cout << (ans ? "Yes" : "No") << endl;
}