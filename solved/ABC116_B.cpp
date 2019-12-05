#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int s;
	cin >> s;
	vector<int> a;
	int now = s;

	while(1){
		a.push_back(now);
		if(now == 1){
			break;
		}

		if(now&1){
			now = 3*now+1;
		}else{
			now = now/2;
		}
	}

	rep(i,a.size()){
		if(a[i] == 4 || a[i] == 2 || a[i] == 1){
			cout << (i+1)+3 <<endl;
			return 0;
		}
	}
}
