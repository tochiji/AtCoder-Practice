#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N;
	cin >> N;
  vector<double> A(N);
  rep(i,N) cin >> A[i];

  double ans = 0;
  rep(i,N){
    ans += 1/A[i];
  }

  cout << fixed << setprecision(9);
  cout << 1/ans << endl;
}