#include <bits/stdc++.h>
#define rep(i, n) for (int(i) = 0; (i) < (n); (i)++)
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> p(n);
  rep(i,n) cin >> p[i];

  int ans = 0;
  for(int i = 1;i<n-1;i++){
    bool isSecond = (((p[i] - p[i-1]) * (p[i] - p[i+1])) <= -1);
    if(isSecond) ans += 1;
  }
  cout << ans << endl;
}