#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    ll N;
    cin >> N;
    vec<int> A(N);
    A[0] = 0;
    map<int,int> mp;
    rep(i,N-1){
        cin >> A[i+1];
        mp[A[i+1]]++;
    }
    for(int i=1;i<=N;++i){
        cout << mp[i] << endl;
    }
}
