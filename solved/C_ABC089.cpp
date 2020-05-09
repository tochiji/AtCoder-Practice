#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;
    map<char,ll> mp;
    rep(i,N) {
        string s;
        cin >> s;
        ++mp[s[0]];
    }
    ll ans = 0;
    ans += mp['M']*mp['A']*mp['R'];
    ans += mp['M']*mp['A']*mp['C'];
    ans += mp['M']*mp['A']*mp['H'];

    ans += mp['M']*mp['R']*mp['C'];
    ans += mp['M']*mp['R']*mp['H'];
    
    ans += mp['M']*mp['C']*mp['H'];

    ans += mp['A']*mp['R']*mp['C'];
    ans += mp['A']*mp['R']*mp['H'];
    ans += mp['A']*mp['C']*mp['H'];

    ans += mp['R']*mp['C']*mp['H'];
    cout << ans << endl;
}