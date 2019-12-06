#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int A,B,C;
	cin >> A >> B >> C;
  int mx = max({A,B,C});
  cout << mx*10 + A + B + C - mx << endl; 
}