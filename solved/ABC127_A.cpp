#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int A,B;
	cin >> A >> B;
  if(A>=13){
    cout << B << endl;
  } else if(A>=6){
    cout << B/2 << endl;
  } else if(A<=5){
    cout << 0 << endl;
  }
}