#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

struct P {
    int y;
    int x;
    int d;
};

int main() {
    int R, C, sy, sx, gy, gx;
    cin >> R >> C >> sy >> sx >> gy >> gx;
    --sy, --sx, --gy, --gx;
    vec<string> c(R);
    rep(i, R) cin >> c[i];

    queue<P> q;
    q.push({sy, sx, 0});

    int ans = 1e9 + 7;
    while (!q.empty()) {
        int y = q.front().y;
        int x = q.front().x;
        int d = q.front().d;
        q.pop();
        if (y == gy && x == gx) ans = min(ans, d);
        c[y][x] = '#';
        if (c[y + 1][x] == '.') {
            q.push({y + 1, x, d + 1});
            c[y + 1][x] = '#';
        }
        if (c[y][x + 1] == '.') {
            q.push({y, x + 1, d + 1});
            c[y][x + 1] = '#';
        }
        if (c[y - 1][x] == '.') {
            q.push({y - 1, x, d + 1});
            c[y - 1][x] = '#';
        }
        if (c[y][x - 1] == '.') {
            q.push({y, x - 1, d + 1});
            c[y][x - 1] = '#';
        }
    }
    cout << ans << endl;
}
