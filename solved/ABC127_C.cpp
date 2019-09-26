#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N,M;
	cin >> N >> M;

  int left = 0;
  int right = N;
  rep(i,M){
    int L,R;
    cin >> L >> R;
    left = max(left,L);
    right = min(right,R);
  }

  cout << max(right - left + 1,0) << endl;
}