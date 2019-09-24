#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int r,D,x2000;
	cin >> r >> D >> x2000;

  int x = x2000;
  for(int i =1;i<=10;i++){
    cout << r*x - D << endl;
    x = r*x -D;
  }
}