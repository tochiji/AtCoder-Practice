#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    ll N;
    cin >> N;
    vec<ll> L(90,0);
    L[0] =2,L[1] =1;
    for(int i=2;i<=N;++i){
        L[i] = L[i-1]+L[i-2];
    }
    cout << L[N] << endl;
}