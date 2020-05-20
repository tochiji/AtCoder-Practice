#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
using P = pair<ll, ll>;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;
    vec<P> p;
    vec<P> m;
    rep(i, N) {
        string s;
        cin >> s;
        int last = 0;
        int mn   = 0;
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
            m.push_back({-(mn - last), -last});
    }
    sort(all(p));
    sort(all(m));

    ll now1 = 0;
    for (auto [f, s] : p) {
        if(now1<f){
            cout << "No" << endl;
            return 0;
        }
        now1+=s;
    }
    ll now2 = 0;
    for (auto [f, s] : m) {
        if(now2<f){
            cout << "No" << endl;
            return 0;
        }
        now2+=s;
    }

    if(now1==now2){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}