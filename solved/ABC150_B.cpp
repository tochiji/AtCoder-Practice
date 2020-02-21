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
	rep(i,N-2){
		if(S[i] == 'A' && S[i+1] == 'B' && S[i+2] == 'C') ans++;
	}
  cout << ans << endl;
}