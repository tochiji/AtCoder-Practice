#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
using namespace std;

int main() {
  int N,D;
  cin >> N >> D;

  int P;
  P = ((D + 1) * 2) - 1;
  cout << (N + (P - 1)) / P <<endl;
}