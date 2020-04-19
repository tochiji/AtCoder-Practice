#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    ll N,M;
    cin >> N >> M;

    vec<ll> A(M);
    rep(i,M) cin >> A[i];
    ll ans = N;
    rep(i,M){
        ans-= A[i];
        if(ans < 0) {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << ans << endl;
}
