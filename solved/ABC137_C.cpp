#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    ll N;
    cin >> N;
    map<string, int> mp;
    ll ans = 0;
    rep(i, N) {
        string s;
        cin >> s;
        sort(all(s));
        mp[s]++;
        ans += (mp[s] - 1);
    }

    cout << ans << endl;
}