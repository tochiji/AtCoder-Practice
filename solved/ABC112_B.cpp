#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N,T;
	cin >> N >> T;
  vector<int> c(N);
  vector<int> t(N);
  rep(i,N){
    cin >> c[i] >> t[i];
  }
  int ans = 9999;
  rep(i,N){
    if(t[i]<=T){
      ans = min(ans,c[i]);
    }
  }
  cout << ((ans != 9999) ? to_string(ans) : "TLE") << endl;
}