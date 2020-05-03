#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;
    vec<ll> A(N);
    map<ll,ll> lmp;
    map<ll,ll> rmp;
    rep(i,N) {
        cin >> A[i];
        ++lmp[A[i]+i+1];
        ++rmp[i+1-A[i]];
    }
    
    ll ans = 0;
    for(auto [f,s]:lmp){
        ans += s*(rmp[f]);
    }
    
    cout << ans << endl;
}
