#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;
    
    unordered_map<int,int> mp;
    ll ans = 0;
    rep(i, N) {
        int A;
        cin >> A;
        ++mp[A];
        ans+=A;
    }
    
    int Q;
    cin >> Q;
    rep(i,Q){
        int B,C;
        cin >> B >> C;
        int diff = C-B;
        ans+=diff*mp[B];
        mp[C]+=mp[B];
        mp[B]= 0;
        cout << ans << endl;
    }
}
