#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	string N;
	cin >> N;
  rep(i,3){
		if(N[i]=='1'){
			cout << "9";
		} else {
			cout << "1";
		}
	}
	cout << endl;
}