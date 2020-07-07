#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    ll N,K;
    cin >> N >> K;
    vec<ll> s(N);
    rep(i, N) {
        cin >> s[i];
        if(s[i] == 0) {
            cout << N << endl;
            return 0;
        }
    }
    s.push_back(K+1);
    ll l=0;
    ll r=0;
    ll now = 1;
    ll ans = 0;
    while(l<=N-1){
        if(l==r){
            now = s[l];
            if(s[l]<=K)ans = max(ans,1LL);
            ++r;
        } else if(now*s[r] <= K && r != N-1){
            now*=s[r];
            ans = max(ans,r-l+1);
            ++r;
        }  else if(now*s[r] <= K && r == N-1){
            ans = max(ans,r-l+1);
            break;
        } else if(now*s[r] > K){
            now/=s[l];
            ++l;
        }
    }
    cout << ans << endl;
}
