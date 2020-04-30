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
    vec<int> X(N);
    rep(i,N) cin >> X[i];
    vec<int> sX(N);
    sX = X;
    sort(all(sX));
    int b1 = sX[N/2 - 1];
    int b2 = sX[N/2];
    
    rep(i,N){
        if(X[i]<=b1) cout << b2 << endl;
        else cout << b1 << endl;
    }
}
