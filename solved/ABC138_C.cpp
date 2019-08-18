#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N;
	cin >> N;
  vector<double> v(N);
  rep(i,N) cin >> v[i];

  sort(all(v));

  double ans = v[0];
  for(int i = 1;i<N;i++){
    ans = (v[i] + ans)/2;
  }
  cout << ans << endl;
}