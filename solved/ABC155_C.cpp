#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
	int N;
	cin >> N;
  vector<string> S(N);
	rep(i,N) cin >> S[i];
	map<string,int> mp;
	int mx = 0;
	rep(i,N){
		mp[S[i]]++;
		mx = max(mx,mp[S[i]]);
	}
	vector<string> ans;
	for(auto e:mp){
		if(e.second == mx) ans.push_back(e.first);
	}
	sort(all(ans));
	for(auto e:ans) cout << e << endl;
}