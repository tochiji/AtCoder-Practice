#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
  int N,A,B;
  cin >> N >> A >> B;

  if(N*A <= B){
    cout << N*A << endl;
  } else {
    cout << B << endl;
  }
}