#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
	ll N;
	cin >> N;
  map<string,ll> mp;
	for(int i=1;i<=N;i++){
		string S = to_string(i);
		string m = {S[0],S[S.size()-1]};
		mp[m]++;
	}
	ll ans = 0;
	for(auto e:mp){
		string e1 = e.first;
		string e2 = {e.first[1],e.first[0]};
		ans+=(mp[e1]*mp[e2]);
	}
	cout << ans << endl;
}