#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
using namespace std;

int main() {
  int turi;
  cin >> turi;
  turi = 1000 - turi;
  int ans = 0;

  for(auto e:{500,100,50,10,5,1}){
    int maisu = turi/e ;
    ans += maisu;
    turi -= e*maisu;
  }
  cout << ans << endl;
}