#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).rbegin(), (x).rend()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    string s;
    int x, y;
    cin >> s >> x >> y;
    int n = s.size();
    vec<int> xs, ys;
    bool forx      = true;
    bool firstTurn = true;
    int now        = 0;
    for (auto e : s) {
        if (e == 'T') {
            if (firstTurn) x -= now;
            if (!firstTurn && forx && now != 0) {
                xs.push_back(now);
            } else if (!firstTurn && !forx && now != 0) {
                ys.push_back(now);
            }
            firstTurn = false;
            forx      = !forx;
            now       = 0;
        } else {
            now++;
        }
    }
    if (firstTurn) x -= now;
    if (!firstTurn && forx && now != 0) {
        xs.push_back(now);
    } else if (!firstTurn && !forx && now != 0) {
        ys.push_back(now);
    }

    vec<vec<bool>> dpx(2, vec<bool>(2*n,false));
    vec<vec<bool>> dpy(2, vec<bool>(2*n,false));
    dpx[0][0] = true;
    dpy[0][0] = true;
    for (auto e : xs) {
        for (int j = 0; j <= 2*n; ++j) {
            dpx[1][j] = (dpx[0][abs(j - e)] || dpx[0][j + e]);
        }
        dpx[0] = dpx[1];
        dpx[1] = vec<bool>(2*n,false);
    }
    for (auto e : ys) {
        for (int j = 0; j <= 2*n; ++j) {
            dpy[1][j] = (dpy[0][abs(j - e)] || dpy[0][j + e]);
        }
        dpy[0] = dpy[1];
        dpy[1] = vec<bool>(2*n,false);
    }
    if (dpx[0][abs(x)] && dpy[0][abs(y)]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}