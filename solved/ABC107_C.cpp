#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<ll> x(N);
    rep(i, N) cin >> x[i];

    int zero_i = lower_bound(all(x), 0) - x.begin();

    vector<ll> plus(N - zero_i);
    vector<ll> minus(zero_i);


    rep(i,N){
        if(zero_i - i>0) minus[zero_i - i - 1] = -1 * x[i];
        else plus[i-zero_i] = x[i];
    }

    ll ans = 1e14;
    rep(i,plus.size()){
        ll tmp_ans = 0;
        ll k = K;
        k -= i+1;
        tmp_ans += plus[i];
        if(minus.size() < k) continue;
        if(k>0) tmp_ans += (plus[i] + minus[k-1]);
        ans = min(ans,tmp_ans);
    }

    rep(i,minus.size()){
        ll tmp_ans = 0;
        ll k = K;
        k -= i+1;
        tmp_ans += minus[i];
        if(plus.size() < k) continue;
        if(k>0) tmp_ans += (minus[i] + plus[k-1]);
        ans = min(ans,tmp_ans);
    }

    cout << ans << endl;
}