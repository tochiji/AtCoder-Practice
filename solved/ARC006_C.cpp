#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N;
	cin >> N;
  vector<int> W(N);
  rep(i,N) cin >> W[i];
  vector<int>ans;

  rep(i,N){
    int index = lower_bound(all(ans),W[i]) - ans.begin();
    if(ans.size()<=index){
      ans.push_back(W[i]);
    }else {
      ans[index] = W[i];
    }
  }
  cout << ans.size() << endl;
}