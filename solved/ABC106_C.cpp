#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	string S;
  ll K;
	cin >> S >> K;
  rep(i,K){
    if(S[i] != '1'){
      cout << S[i] << endl;
      return 0;
    }
  }
  cout << S[K-1] << endl;
}