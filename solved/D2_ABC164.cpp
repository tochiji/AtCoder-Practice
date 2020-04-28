#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    string S;
    cin >> S;
    int N = S.size();
    map<int,int> mp;
    ll ans = 0;
    int keta = 1;
    int now = 0;
    reverse(all(S));
    mp[0] = 1;
    for(auto e:S){
        int s = e - '0';
        now = (now + s*keta)%2019;
        ans += mp[now];
        ++mp[now];
        keta = (keta*10)%2019;
    }
    cout << ans << endl;
}