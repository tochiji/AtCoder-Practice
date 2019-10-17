#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

struct P {
    int b;
    ll c;

    bool operator<(const P &another) const {
        if (c == another.c)
            return b > another.b;
        else
            return c > another.c;
    };
};

int main() {
  int N,M;
  cin >> N >> M;
  vector<P> A(N);
  rep(i,N){
    ll a;
    cin >> a;
    A[i] = {1,a};
  }
  rep(i,M){
    int B,C;
    cin >> B >> C;
    A.push_back({B,C});
  }
  sort(all(A));

  ll ans = 0;
  int idx = 0;
  rep(i,N){
    if(A[idx].b == 0){
      idx++;
    }
    ans += A[idx].c;
    A[idx].b--;
  }
  cout << ans << endl;
}