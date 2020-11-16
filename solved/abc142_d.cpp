#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    ll A, B;
    cin >> A >> B;
    ll g = __gcd(A,B);

    ll ans = 1;
    for(ll i=2;i*i<=g;++i){
        if(g%i==0){
            ++ans;
            while(g%i==0) g/=i;
        }
    }
    if(g>1) ++ans;
    cout << ans << '\n';
}
