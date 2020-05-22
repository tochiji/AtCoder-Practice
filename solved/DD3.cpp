#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N,M;
    cin >> N >> M;
    vec<vec<int>> A(N,vec<int>(M)); 
    rep(i,N)rep(j,M){
        cin >> A[i][j];
    }

    ll ans = 0;
    rep(i,M)rep(j,i){
        ll tmp = 0;
        rep(n,N){
            tmp += max(A[n][j],A[n][i]);
        }
        ans = max(ans,tmp);
    }
    cout << ans << endl;
}