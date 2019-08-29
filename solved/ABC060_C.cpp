#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep1(i, n) for (int i = 1; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;
    vector<int> t(N);
    rep(i,N) cin >> t[i];

    ll ans  = 0;
    rep1(i, N) {
      if(t[i] - t[i-1] >= T){
        ans += T;
      } else {
        ans += (t[i] - t[i-1]);
      }
    }
    ans += T;
    cout << ans << endl;
}