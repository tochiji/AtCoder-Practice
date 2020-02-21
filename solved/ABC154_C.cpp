#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
	int N;
	cin >> N;
  vector<ll> A(N);
	rep(i,N) cin >> A[i];
	map<int,int> mp;
	rep(i,N) mp[A[i]]++;
	for(auto e:mp){
		if(e.second >= 2){
			cout << "NO" << endl;
			return 0; 
		}
	}
	cout << "YES" << endl;
}