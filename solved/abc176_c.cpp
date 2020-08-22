#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;
    
    vec<int> A(N);
    rep(i, N) cin >> A[i];

    ll ans = 0;
    ll before = A[0];
    rep(i,N){
        if(A[i]<before) ans+=(before-A[i]),A[i]=before;
        before = A[i];
    }
    cout << ans << '\n';
}
