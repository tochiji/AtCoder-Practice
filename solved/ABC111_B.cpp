#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N;
	cin >> N;
	int now = 999;
  while(now-N>=0){
		now-=111;
	}
	cout << now+111 <<endl;
}