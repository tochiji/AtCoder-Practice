#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;

    vec<ll> A(N);
    rep(i, N) cin >> A[i];

    ll ans = 1000;
    ll kabu = 0;
    rep(i,N-1){
        ans+=kabu*A[i]; 
        kabu = 0;
        if(A[i]<A[i+1]){
            kabu=ans/A[i];
            ans-=kabu*A[i];
        }
    }

    cout << ans + kabu*A[N-1] << endl;
}
