#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N;
	cin >> N;
  int ans = 0;
  for(int i=1;i<=N;i++){
    string n = to_string(i);
    if(n.size() & 1) ans++;
  }
  cout << ans << endl;
}