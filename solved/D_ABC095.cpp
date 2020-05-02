#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

#define debug(x) cout << #x << "=" << x << endl;
#define vdebug(v) { cout << #v << "=" << endl; rep(i_debug, v.size()) { cout << v[i_debug] << ",";}cout << endl; }
#define mdebug(m) { cout << #m << "=" << endl; rep(i_debug, m.size()) { rep(j_debug, m[i_debug].size()) { cout << m[i_debug][j_debug] << ","; } cout << endl; } }

int main() {
    ll N, C;
    cin >> N >> C;
    vec<ll> x(N);
    vec<ll> v(N);
    rep(i, N) cin >> x[i] >> v[i];

    vec<ll> lcal(N);
    vec<ll> rcal(N);
    lcal[0] = v[0] - x[0];
    rcal[0] = v[N-1] - (C - x[N-1]);
    for (int i = 1; i < N; ++i){
        lcal[i] = v[i] - (x[i]-x[i-1]) + lcal[i - 1];
        rcal[i] = v[N-1-i] - (x[N-i] - x[N-1-i]) + rcal[i-1];
    } 

    vec<ll> lcals(N);
    vec<ll> rcals(N);
    lcals[0] = lcal[0];
    rcals[0] = rcal[0];

    for (int i = 1; i < N; ++i){
        lcals[i] = max(lcals[i-1],lcal[i]);
        rcals[i] = max(rcals[i-1],rcal[i]);
    }

    ll mxl = lcals[N-1];
    ll mxr = rcals[N-1];
    ll mxlr = 0;
    ll mxrl = 0;

    rep(i,N-1){
        ll tmplr = lcal[i] - x[i] + rcals[N-1-i-1];
        ll tmprl = rcal[i] - (C- x[N-1-i]) + lcals[N-1-i-1];
        // printf("tmplr = %lld - %lld + %lld = %lld\n",lcal[i],x[i],rcals[N-1-i],tmplr);
        // printf("tmprl = %lld - %lld + %lld = %lld\n",rcal[i],(C- x[N-1-i]),lcals[i],tmprl);
        mxlr = max(mxlr,tmplr);
        mxrl = max(mxrl,tmprl);
    }
    cout << max({mxl,mxr,mxlr,mxrl}) << endl;

}
