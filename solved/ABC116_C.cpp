#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N;
	cin >> N;
  vector<int> h(N);
  rep(i,N) cin >> h[i];
  int ans = 0;

  while(1){
    int start = N;
    int end = 0;

    rep(i,N){
      if(start != N && h[i] == 0) break;
      if(h[i] != 0){
        start = min(start,i);
        end = max(end,i);
      }
    }

    if(start>end) break;

    for(int i = start;i<=end;i++){
      h[i]--;
    }
    ans++;
  }
  cout << ans << endl;
}