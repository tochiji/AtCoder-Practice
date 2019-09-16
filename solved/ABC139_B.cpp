#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int A,B;
	cin >> A >> B;
  if(B == 1){
    cout << 0 << endl;
    return 0;
  }
  
  int i = 0;
  int mouth = A;
  while(mouth < B){
    i++;
    mouth += A-1;
  }
  cout << i+1 << endl;
}