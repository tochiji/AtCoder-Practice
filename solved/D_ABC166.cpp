#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    ll X;
    cin >> X;
    rep(a,10000)rep(b,10000){
        ll A = a*a*a*a*a;
        ll B = b*b*b*b*b;
        if(A-B== X){
            cout << a << " " << b << endl;
            return 0;
        } else if(A-(-1*B) == X){
            cout << a << " " << -1*b << endl;
            return 0;
        }
    }
}
