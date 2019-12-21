#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

struct P {
    int a;
    int b;

    bool operator<(const P &another) const {
        if (b == another.b)
            return a > another.a;
        else
            return b < another.b;
    };
};

int main() {
    int N,M;
    cin >> N >> M;
    vector<P> I;
    rep(i,M){
      int a,b;
      cin >> a >> b;
      a--;b--;
      I.push_back({a,b});
    }
    sort(all(I));

    int ans = 0;
    int mx = 0;
    rep(i,M){
        if(!(I[i].a < mx && mx <= I[i].b)){
          ans++;
          mx = I[i].b;
        }
    }
    cout << ans << endl;
}