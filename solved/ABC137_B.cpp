#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int K,X;
	cin >> K >> X;

  int s = (X - K) + 1;
  int e = (X + K) - 1;

  for(int i = s; i<=e;i++){
    cout << i << " ";
  }
  cout << endl;
}