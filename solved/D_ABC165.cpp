#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    ll A,B,N;
    cin >> A >> B >> N;
    
    ll x = min(B-1,N);
    ll ans = (A*x)/B - A*(x/B);
    cout << ans << endl; 
}
