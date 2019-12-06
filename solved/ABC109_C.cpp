#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N,X;
	cin >> N>>X;
  vector<int> x(N);
  rep(i,N) cin >> x[i];
  auto gcd = [](auto a, auto b){
    while(1){
      swap(a,b);
      if(b == 0) return a;
      a = a%b;
    }
  };
  int ans = abs(X - x[0]);
  rep(i,N){
    ans = gcd(ans,abs(X - x[i]));
  }
  cout << ans << endl;
}



    auto gcd = [](int a, int b){
        while(1){
            swap(a,b);
            if(b == 0) return a;
            a%=b;
        }
    };