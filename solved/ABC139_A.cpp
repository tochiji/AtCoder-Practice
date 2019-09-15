#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	string S,T;
	cin >> S >> T;
  int ans = 0;
  for(auto e:{0,1,2}){
    if(S[e] == T[e]) ans++;
  }
  cout << ans << endl;
}