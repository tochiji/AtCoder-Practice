#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    ll N, K;
    cin >> N >> K;
    
    vec<ll> A(N);

    rep(i, N) cin >> A[i];

    for(int i=K;i<N;++i){
        if(A[i] != A[i-K] && A[i]/A[i-K] >= 1){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
