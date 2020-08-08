#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int H, W;
    cin >> H >> W;
    
    vec<string> a(H);
    rep(i,H) {
        cin >> a[i];
        a[i] = "#" + a[i] + "#";
    }
    rep(i,W+2) cout << "#";
    cout << endl;
    rep(i,H) cout << a[i] << endl;
    rep(i,W+2) cout << "#";
    cout << endl;
}