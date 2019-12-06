#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N;
	cin >> N;
  vector<string> W(N);
  rep(i,N) cin >> W[i];

  char before = W[0][0];
  rep(i,N){
    if(before == W[i][0]){
      before = W[i][W[i].size()-1];
    } else {
      cout << "No" << endl;
      return 0;
    }
  }
  sort(all(W));
  rep(i,N-1){
    if(W[i] == W[i+1]){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}