#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int X;
	cin >> X;
  for(int i = X;i<=X+10000;i++){
		bool flag = true;
		for(int tmp=2;tmp*tmp<=i;tmp++){
			if(i%tmp == 0) flag = false;
		}
		if(flag){
			cout << i << endl;
			return 0;
		}
	}
}