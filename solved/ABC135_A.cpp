#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
using namespace std;

int main() {
  int A,B;
  cin >> A >> B;
  int K2 = A + B;
  if(K2 % 2 == 0){
    cout << K2/2 << endl;
  } else {
    cout << "IMPOSSIBLE" << endl;
  }
}