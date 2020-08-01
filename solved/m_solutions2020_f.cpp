#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;
    int K = 200000;

    vec<vec<pair<int, char>>> T(K + 1), Y(K + 1), P(K * 2 + 10), M(K * 2 + 10);
    rep(i, N) {
        int x, y;
        char c;
        cin >> x >> y >> c;
        if (c == 'U' || c == 'D') {
            T[x].push_back({y, c});
            P[x + y].push_back({x, c});
            M[x - y + K].push_back({x, c});
        } else if (c == 'R' || c == 'L') {
            Y[y].push_back({x, c});
            P[x + y].push_back({x, c});
            M[x - y + K].push_back({x, c});
        }
    }

    int ans = 1e9;
    rep(i, K + 1) {
        int u = -1;
        sort(all(T[i]));
        for (auto [y, c] : T[i]) {
            if (c == 'U') u = y;
            else if (c == 'D' && u != -1) {
                ans = min(ans, (y - u)*10/2);
            }
        }
    }

    rep(i, K + 1) {
        int l = -1;
        sort(all(Y[i]));
        for (auto [x, c] : Y[i]) {
            if (c == 'R') l = x;
            else if (c == 'L' && l != -1) {
                ans = min(ans, (x - l)*10/2);
            }
        }
    }

    rep(i, K * 2 + 5) {
        int r = -1;
        int d = -1;
        sort(all(P[i]));
        for (auto [x, c] : P[i]) {
            if (c == 'R') r = x;
            else if (c == 'D')
                d = x;
            else if (c == 'U' && r != -1) {
                ans = min(ans, (x - r)*10);
            } else if (c == 'L' && d != -1) {
                ans = min(ans, (x - d)*10);
            }
        }
    }

    rep(i, K * 2 + 5) {
        int r = -1;
        int u = -1;
        sort(all(M[i]));
        for (auto [x, c] : M[i]) {
            if (c == 'R') r = x;
            else if (c == 'U')
                u = x;
            else if (c == 'D' && r != -1) {
                ans = min(ans, (x - r)*10);
            } else if (c == 'L' && u != -1) {
                ans = min(ans, (x - u)*10);
            }
        }
    }

    cout << ((ans == 1e9) ? "SAFE" : to_string(ans)) << endl;
}
