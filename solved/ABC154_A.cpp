#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
	string S,T,U;
	int A,B;
	cin >> S >> T >> A >> B >> U;
  if(S==U) A--;
	if(T == U) B--;
	cout << A << " " << B << endl;
}