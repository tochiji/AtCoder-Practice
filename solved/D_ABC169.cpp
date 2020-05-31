#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    ll N;
    cin >> N;

    map<ll, int> ps;
    auto decompositPrime = [&](ll n, map<ll, int> &mp) {
        ll a = 2;
        while (n >= a * a) {
            if (n % a == 0) {
                mp[a]++;
                n /= a;
            } else {
                a++;
            }
        }
        if (n != 1) mp[n]++;
    };

    decompositPrime(N, ps);
 
    int ans = 0;
    for (auto [e0,e1] : ps) {
        int now = e1;
        for(int i =1;i<=e1;++i){
            if(now<0) break;
            if(now-i>=0) ++ans;
            now-=i;
        }
    }
    cout << ans << endl;
}
