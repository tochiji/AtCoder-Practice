#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

struct P {
    int a;
    int b;

    bool operator<(const P &another) const {
        if (a == another.a)
            return b > another.b;
        else
            return a < another.a;
    };
};

int main() {
    int N;
    cin >> N;
    vec<P> r(N), b(N);
    rep(i, N) cin >> r[i].a >> r[i].b;
    rep(i, N) cin >> b[i].a >> b[i].b;
    sort(all(r));
    sort(all(b));

    int ans = 0;
    rep(i,N){
        int ba = b[i].a,bb = b[i].b;

        int maxrb = -1;
        int maxj = -1;
        rep(j,N){
            int ra = r[j].a,rb =r[j].b;
            if(ba <= ra) break;
            if(bb <= rb) continue;
            if(rb > maxrb){
                maxrb = rb;
                maxj = j;
            }
        }
        if(maxj!=-1) {
            r[maxj].b = 300;
            ++ans;
        } 
    }
    cout << ans << endl;
}