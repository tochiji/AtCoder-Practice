#include <bits/stdc++.h>
#define rep(i, n) for (int(i) = 0; (i) < (n); (i)++)
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> d(N);
  rep(i,N) cin >> d[i];
  sort(d.begin(),d.end());

  if(N % 2 != 0){
    cout << 0 << endl;
  } else if(d[N/2] == d[N/2 - 1]){
    cout << 0 << endl;
  } else {
    cout << d[N/2] - d[N/2 - 1] << endl;
  }
}