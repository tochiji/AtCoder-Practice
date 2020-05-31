#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

bool checkOverflow(ll a, ll b) {
    ll MAX = (ll)1e18;
    return (a > MAX / b)?true:false;
}

int main() {
    int N;
    cin >> N;
    vec<ll> A(N);
    rep(i, N) cin >> A[i];
    sort(all(A));
    if(A[0] == 0) {
        cout << 0 << endl;
        return 0;
    }

    ll ans = 1;
    for(auto e:A){
        if(checkOverflow(e,ans)){
            cout << -1 << endl;
            return 0;
        }
        ans*=e;
    }

    cout << ans << endl;
}
