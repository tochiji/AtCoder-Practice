#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

int main() {
	int A,B,K;
	cin >> A >> B >> K;

	int count = 0;

  for(int i = min(A,B);1<=i;i--){
		if((A%i) == 0 && (B%i) == 0) count++;

		if(count == K){
			cout << i << endl;
			return 0;
		}
	}
}