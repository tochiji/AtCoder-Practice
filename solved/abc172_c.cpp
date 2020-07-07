#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    ll N, M, K;
    cin >> N >> M >> K;
    
    vec<ll> A(N);
    rep(i, N) cin >> A[i];
    
    vec<ll> B(M);
    rep(i, M) cin >> B[i];

    rep(i,N-1) A[i+1]+=A[i];
    rep(i,M-1) B[i+1]+=B[i];
    A.insert(A.begin(),0);
    A.push_back(1e18);
    B.insert(B.begin(),0);
    B.push_back(1e18);

    ll ans = 0;
    rep(i,A.size()){
        if(A[i] > K) break;
        ll Z = K - A[i];
        int index = upper_bound(all(B),Z) - B.begin();
        --index;
        ans = max(ans,i+index);
    }
    cout << ans << endl;
}
