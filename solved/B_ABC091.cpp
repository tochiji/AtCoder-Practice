#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N,M;
    cin >> N;
    map<string,int> mp;
    rep(i,N) {
        string s;cin >> s;
        ++mp[s];
    }
    cin >> M;
    rep(i,M) {
        string s;cin >> s;
        --mp[s];
    }
    
    int ans = 0;
    for(auto e:mp){
        ans = max(ans,e.second);
    }
    cout << ans << endl;
}