#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N,K;
	cin >> N >> K;
  double ans = 0;

  rep(i,N){
    int deme = i+1;
    if(deme>=K){
      ans += 1/(double)N;
    } else { 
      double prob = 1/(double)N;
      while(deme<K){
        prob*=((double)1/2);
        deme*=2;
      }
      ans += prob;
    }
  }

  cout << fixed << setprecision(10);
  cout << ans << endl;
}