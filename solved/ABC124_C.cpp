#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
  string S;
  cin >> S;

  int odd = 0;
  int even = 0;
  
  rep(i,S.length()){
    if(i&1){
      (S[i]&1) ? odd++ : even++;
    } else {
      (S[i]&1) ? even++ : odd++;
    }
  }
  cout << min(even,odd) << endl;
}