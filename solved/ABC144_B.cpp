#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N;
	cin >> N;
  
	for(int i=1;i<=9;i++){
		int amari = N % i;
		int syou = N /i;
		if(amari == 0 && (syou>0 && syou<=9)){
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}