#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;
    
    vec<int> L(N);
    rep(i, N) cin >> L[i];

    if(N<=2){
        cout << 0 << '\n';
        return 0;
    }

    ll ans= 0;
    rep(i,N)rep(j,i)rep(k,j){
        if(L[i]==L[j]||L[i]==L[k]||L[j]==L[k]){
            continue;
        }
        if(i==j||j==k||k==i) continue;
        vec<int> a = {L[i],L[j],L[k]};
        sort(all(a));
        if(a[2]-a[1]-a[0]>=0){
            continue;
        }
        // cout << i << j << k << endl;
        ++ans;
    }
    cout << ans << '\n';
}
