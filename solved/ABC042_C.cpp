// こだわり者いろはちゃん
#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,K;
  cin >> N >> K;
  vector<char> D(K);
  for(int i=0;i<K;i++) cin >> D[i];

  for(int n=N;n<=99999;n++){
    string check = to_string(n);
    bool irohaOK = true;
    for(int c=0;c<check.length();c++){
      if(!irohaOK) break;
      for(int d=0;d<K;d++){
        if(check[c] == D[d]){
          irohaOK = false;
          break;
        }
      }
    }
    if(irohaOK){
      cout << n << endl;
      return 0;
    }
  }
}