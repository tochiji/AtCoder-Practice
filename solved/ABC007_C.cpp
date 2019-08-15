// 深さ優先探索 dfs 竹
#include <bits/stdc++.h>
using namespace std;

struct Position {
    int y;
    int x;
    int depth;
};

int R, C;
int sy, sx, gy, gx;
queue<Position> q;

int main() {
    cin >> R >> C;
    cin >> sy >> sx >> gy >> gx;
    sy--;
    sx--;
    gy--;
    gx--;
    vector<string> c(R);
    for (int i = 0; i < R; i++) {
        cin >> c[i];
    }

    int ans = 99999999;
    q.push({sy, sx, 0});

    // ここからbfs 幅優先探索
    while (!q.empty()) {
        Position now = q.front();
        int x        = now.x;
        int y        = now.y;
        int depth    = now.depth;
        c[y][x]      = '#';
        q.pop();

        if (y == gy && x == gx) {
            ans = now.depth;
            break;
        }

        for (int i = 0; i < 4; i++) {
            if (i == 0 && c[y - 1][x] == '.') q.push({y - 1, x, depth + 1});
            if (i == 1 && c[y][x - 1] == '.') q.push({y, x - 1, depth + 1});
            if (i == 2 && c[y + 1][x] == '.') q.push({y + 1, x, depth + 1});
            if (i == 3 && c[y][x + 1] == '.') q.push({y, x + 1, depth + 1});
        }
        c[y - 1][x] = '#';
        c[y][x - 1] = '#';
        c[y + 1][x] = '#';
        c[y][x + 1] = '#';
    }
    cout << ans << endl;
}