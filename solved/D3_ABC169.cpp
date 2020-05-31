#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    string s;
    int x, y;
    cin >> s >> x >> y;
    s += 'T';

    vec<vec<bool>> X(2, vec<bool>(8001, 0)), Y(2, vec<bool>(8001, 0));
    X[0][0] = 1;
    Y[0][0] = 1;

    bool forx  = true;
    bool first = true;
    int now    = 0;
    for (auto e : s) {
        if (e == 'F') {
            ++now;
        } else {
            if (first) {
                x -= now;
                first = false;
            } else if (now > 0) {
                vec<vec<bool>> &a = (forx ? X : Y);
                rep(i, 8001) {
                    if (!a[0][i]) continue;
                    a[1][abs(i - now)] = true;
                    a[1][abs(i + now)] = true;
                }
                a[0] = a[1];
                a[1] = vec<bool>(8001, 0);
            }
            forx = !forx;
            now  = 0;
        }
    }

    bool ans = (X[0][abs(x)] && Y[0][abs(y)]);
    cout << (ans ? "Yes" : "No") << endl;
}