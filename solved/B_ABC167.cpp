#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    ll A,B,C,K;
    cin >> A >> B >> C >> K;
    ll ans = 0;
    ans += min(A,K);
    K-=A;
    K-=B;
    if(K>0){
        ans-=min(C,K);
    }
    cout << ans << endl;
}
