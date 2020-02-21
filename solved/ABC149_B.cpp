#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	ll A,B,K;
	cin >> A >> B >> K;
	ll ansA = max(0LL,A-K);
	ll ansB = 0;
	if(A>=K) ansB = B;
	else ansB = max(B - (K-A),0LL);
  cout << ansA  << " " << ansB << endl;
}