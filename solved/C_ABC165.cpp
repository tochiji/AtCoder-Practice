#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define r(i, j) for (int i = 1; i <= j; i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;
    vec<int> A(Q),B(Q),C(Q),D(Q);
    rep(i, Q) {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
        --A[i];--B[i];
    }

    ll ans = 0;
    for (int a = 1; a <= M; ++a) {
        r(b, a) r(c, b) r(d, c) r(e, d) r(f, e) r(g, f) r(h, g) r(i, h)  r(j, i){
            vec<int> Z ={j,i,h,g,f,e,d,c,b,a};
            ll tmpans = 0;
            rep(k,Q){
                if(Z[B[k]] - Z[A[k]] == C[k]) tmpans += D[k];
            }
            ans = max(ans,tmpans);
        }
    }

    cout << ans << endl;
}
