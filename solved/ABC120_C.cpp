#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	string S;
	cin >> S;
  deque<int> d;
	int ans = 0;
	rep(i,S.size()){
		if(d.empty()){
			d.push_front(S[i] - '0');
			continue;
		}
		int top = d.front();
		if((S[i] - '0') != top){
			d.pop_front();
						ans+=2;
		}else {
			d.push_front(S[i] - '0');
		}
	}
	cout << ans << endl;
}