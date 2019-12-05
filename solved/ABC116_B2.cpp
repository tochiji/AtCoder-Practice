#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

int main() {
	int s;
	cin >> s;
	map<int,int> a;
	int now = s;

	rep(i,1000000){
		if(a[now] == 0) a[now]++;
		else{
			cout << i+1 << endl;
			return 0;
		}

		if(now&1){
			now = 3*now+1;
		}else{
			now = now/2;
		}
	}
}
