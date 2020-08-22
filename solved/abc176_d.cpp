#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

struct P {
    int y;
    int x;
    int m;
};

int main() {
    int H, W;
    cin >> H >> W;

    int Ch, Cw, Dh, Dw;
    cin >> Ch >> Cw >> Dh >> Dw;
    --Ch, --Cw, --Dh, --Dw;

    vec<string> S(H);
    rep(i, H) cin >> S[i];

    deque<P> q;
    q.push_front({Ch, Cw, 0});

    auto push = [&](int y, int x, int m, bool front) {
        if (y < 0 || y > H - 1 || x < 0 || x > W - 1) return;
        if (S[y][x] == '#') return;

        if (front) q.push_front({y, x, m});
        else
            q.push_back({y, x, m});
    };

    int ans = 1000000;
    while (!q.empty()) {
        int y = q.front().y;
        int x = q.front().x;
        int m = q.front().m;
        q.pop_front();
        S[y][x] = '#';

        if (y == Dh && x == Dw) {
            cout << m << '\n';
            return 0;
        }

        push(y + 1, x, m, true);
        push(y, x + 1, m, true);
        push(y - 1, x, m, true);
        push(y, x - 1, m, true);

        for (int i = -2; i <= 2; ++i)
            for (int j = -2; j <= 2; ++j) {
                push(y + i, x + j, m + 1, false);
            }
    }
    cout << -1 << endl;
}
