#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N;
	cin >> N;
  if(N&1){
		cout << (N/2 + 1)/(double)N << endl;
	} else {
		cout << ((double)N/2)/N << endl;
	}
}