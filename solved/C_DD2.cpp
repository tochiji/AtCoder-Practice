#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;
    vec<ll> A(N),B(N);
    rep(i, N) cin >> A[i] >> B[i];
    sort(all(A));
    sort(all(B));
    ll midA = A[(N-1)/2];
    ll midB = B[(N-1)/2];
    
    ll ans = 0;
    rep(i,N){
        ans+=abs(midA-A[i]);
        ans+=abs(B[i]-A[i]);
        ans+=abs(midB-B[i]);
    }
    cout << ans << endl;
}