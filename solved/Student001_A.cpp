#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int M,D;
	cin >> M >> D;
  int ans = 0;
  for(int m =1;m<=M;m++)for(int d = 1;d<=D;d++){
    int d10 = d /10;
    int d1 = d %10;
    if(d10 >= 2 && d1 >= 2 && d1* d10 == m){
      ans += 1;
    }
  }
  cout << ans << endl;
}