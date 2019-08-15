#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    int N;
    cin >> N;
    int t[4];
    rep(i, N) cin >> t[i];

    int ans = 1e9;
    int diffmin = 1e9;
    for(int mask=0; mask<(1<<N);mask++){
      int Machine1 = 0;
      int Machine2 = 0;

      for(int i =0;i<N;i++){
        mask&(1<<i) ? Machine1 += t[i] : Machine2 += t[i];
      }
      
      int diff = abs(Machine1-Machine2);
      if(min(diffmin,diff) == diff){
        diffmin = diff;
        ans = min(ans,max(Machine1,Machine2));
      }
    }
    cout << ans << endl;
}