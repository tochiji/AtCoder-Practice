#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N,K;
  string S;
	cin >> N >> K;
  cin >> S;
  S[K-1] = S[K-1] + 32;
  cout << S << endl;
}