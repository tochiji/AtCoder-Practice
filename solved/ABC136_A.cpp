#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int A,B,C;
	cin >> A >> B >> C;
  int nokori = A-B;
  cout << max(C - nokori,0) << endl;
}