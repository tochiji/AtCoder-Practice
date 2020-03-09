#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
	int A,B;
	cin >> A >> B;
	for(int i=1;i<=100;i++){
		int p8 = i*0.08;
		int p10 = i*0.1;
		if(p8==A&&p10==B){
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
}