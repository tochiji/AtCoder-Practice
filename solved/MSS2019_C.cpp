#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int X;
	cin >> X;

	if(X<100){
		cout << 0 << endl;
		return 0;
	}

  int mx;
	mx = X / 100;
	
	int amari;
	amari = X - (mx * 100);

	int count = 0;
	while(amari != 0){
		if(amari>=5){
			count = amari / 5;
			amari = amari - count*5;
		} else {
			count += 1;
			amari = 0;
		}
	}

	if(mx >= count){
		cout << 1 << endl; 
	} else {
		cout << 0 << endl;
	}
}