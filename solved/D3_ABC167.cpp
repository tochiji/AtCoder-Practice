#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    ll N,K;
    cin >> N >> K;
    vec<ll> A(N);
    rep(i,N) {
        cin >> A[i];
        --A[i];
    }
    int log2 = 0;
    while((1LL<<log2)<K) ++log2;

    vec<vec<int>> dbl(log2+1,vec<int>(N));
    rep(i,N) dbl[0][i] = A[i];

    rep(i,log2)rep(j,N){
        dbl[i+1][j] = dbl[i][dbl[i][j]];
    }

    int now = 0;
    rep(i,log2+1){
        if(K&(1LL<<i)) now = dbl[i][now];
    }
    cout << now+1 << endl;
}