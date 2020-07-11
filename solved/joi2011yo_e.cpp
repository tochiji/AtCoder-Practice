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
    int N;
};

int main() {
    int H, W, N;
    cin >> H >> W >> N;
    vec<string> c(H);
    rep(i, H) cin >> c[i];
    vec<vec<bool>> visit(H, vec<bool>(W, false));

    int sy, sx;
    rep(i, H) rep(j, W) if (c[i][j] == 'S') sy = i, sx = j;

    queue<P> q;
    q.push({sy, sx, 0, 1});
    visit[sy][sx] = true;

    auto push = [&](int y, int x, int d, int next) {
        if (y < 0 || y > H - 1 || x < 0 || x > W - 1) return;
        if (visit[y][x]) return;
        if (c[y][x] == 'X') return;

        q.push({y, x, d, next});
        visit[y][x] = true;
    };

    ll ans = 0;
    while (!q.empty()) {
        int y    = q.front().y;
        int x    = q.front().x;
        int d    = q.front().d;
        int next = q.front().N;
        q.pop();

        if (c[y][x] == next + '0') {
            ans += d;
            if (next == N) break;
            ++next;
            d     = 0;
            q     = queue<P>();
            visit = vec<vec<bool>>(H, vec<bool>(W, false));
        }

        push(y + 1, x, d + 1, next);
        push(y, x + 1, d + 1, next);
        push(y - 1, x, d + 1, next);
        push(y, x - 1, d + 1, next);
    }
    cout << ans << endl;
}
