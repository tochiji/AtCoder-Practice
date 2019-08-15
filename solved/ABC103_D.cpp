#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using namespace std;

struct P {
    int a;
    int b;

    bool operator<(const P &another) const {
        if (b == another.b)
            return a < another.a;
        else
            return b < another.b;
    };
};

int main() {
    int N, M;
    cin >> N >> M;
    vector<P> p(M);
    rep(i, M) cin >> p[i].a >> p[i].b;

    sort(all(p));

    int b_before = 0;
    int ans = 0;

    rep(i,M){
      if(p[i].b > b_before && p[i].a >= b_before){
        ans += 1;
        b_before = p[i].b;
      }
    }
    cout << ans << endl;
}