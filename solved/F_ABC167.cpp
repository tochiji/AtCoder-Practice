#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using namespace std;
using ll = long long;
using P  = pair<int, int>;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;
    vec<P> p, m;
    rep(i, N) {
        string s;
        cin >> s;
        ll last = 0;
        ll mn   = 0;
        for (auto e : s) {
            if (e == '(')
                ++last;
            else
                --last;
            mn = min(mn, last);
        }
        if (last >= 0)
            p.push_back({-mn, last});
        else
            m.push_back({-(mn-last), -last});
    }

    sort(all(p));
    sort(all(m));

    ll now = 0;
    for (auto [f, e] : p) {
        if (now - f < 0) {
            cout << "No" << endl;
            return 0;
        } else {
            now = now + e;
        }
    }

    ll now2 = 0; 
    for (auto [f, e] : m) {
        if (now2 - f < 0) {
            cout << "No" << endl;
            return 0;
        } else {
            now2 = now2 + e;
        }
    }
    if (now != now2) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}