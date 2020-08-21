#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    string S;
    cin >> S;
    int now = 0;
    int ans = 0;
    for(auto e:S){
        if(e=='R')++now;
        else now = 0;

        ans=max(ans,now);
    }
    cout << ans << '\n';
}
