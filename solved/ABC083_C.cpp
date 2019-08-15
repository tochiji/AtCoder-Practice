#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	ll X,Y;
	cin >> X >> Y;
  ll cnt = 0;
  ll now = X;
  while(now<=Y){
    cnt +=1;
    now*=2;
  }
  cout << cnt << endl;
}