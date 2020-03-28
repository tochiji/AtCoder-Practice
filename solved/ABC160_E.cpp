#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
#define debug(x) cout << #x << "=" << x << endl;
#define vdebug(v) { cout << #v << "=" << endl; rep(i_debug, v.size()) { cout << v[i_debug] << ",";}cout << endl; }
#define mdebug(m) { cout << #m << "=" << endl; rep(i_debug, m.size()) { rep(j_debug, m[i_debug].size()) { cout << m[i_debug][j_debug] << ","; } cout << endl; } }

int main() {
    int X,Y,A,B,C;
    cin >> X >> Y >> A >> B >> C;
    vector<int> p(A);
    vector<int> q(B);
    vector<int> r(C);
    rep(i,A) cin >> p[i];
    rep(i,B) cin >> q[i];
    rep(i,C) cin >> r[i];
    sort(all(p),greater<int>());
    sort(all(q),greater<int>());
    sort(all(r),greater<int>());
    vector<int> anss;
    for(int i = 0;i<X;i++) anss.push_back(p[i]); 
    for(int i = 0;i<Y;i++) anss.push_back(q[i]); 
    for(int i = 0;i<C;i++) anss.push_back(r[i]); 
    sort(all(anss),greater<int>());
    ll ans = 0;
    rep(i,X+Y){
        ans += anss[i];
    }
    cout << ans << endl;
}
