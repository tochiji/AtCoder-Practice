#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
  int N;
  cin >> N;
  double ans = 0;

  rep(i,N){
    double x; string u;
    cin >> x >> u;
    if(u=="JPY") ans+=x;
    else ans+=x*380000;
  }
  cout << fixed << setprecision(8);
  cout << ans << endl;
}