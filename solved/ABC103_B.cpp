#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    string S,T;
    cin >> S >> T;
    
    if(S==T){
      cout << "Yes" << endl;
      return 0;
    }

    for(int i=0;i<S.size();i++){
      S = S[S.size()-1] + S;
      S = S.substr(0,S.size()-1);
      if(S == T){
              cout << "Yes" << endl;
      return 0;
      }
    }
    cout << "No" << endl;
}