#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	ll N;
	cin >> N;
  ll ans = (1+N)*N/2 - N;
	cout << ans << endl;
}