#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;
    unordered_map<ll,ll> mp;
    for(int x=1;x<=N;++x)for(int y=1;y<=N;++y){
        ll a = x*x + y*y;
        ll b = x*y;
        if(a+b>N) continue;
        for(int z=1;z<=N;++z){
            ll c = z*z;
            ll d = (x+y)*z;
            if(a+b+c+d > N) break;
            ++mp[a+b+c+d];
        }
    }

    for(int i=1;i<=N;++i){
        cout << mp[i] << endl;
    }
}
