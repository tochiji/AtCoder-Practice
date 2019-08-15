#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> A(H);
    int B[H][W];

    rep(i, H) rep(j, W) {
        B[i][j] = 99999;
    }

    struct position {
        int x;
        int y;
    };

    deque<position> q;

    rep(i, H) {
        cin >> A[i];
        int index = A[i].find("s");
        if (index != string::npos) {
            A[i][index] = '.';
            B[i][index] = 0;
            q.push_front({i, index});
        }
    }

    const int dx[] = {0, 0, -1, 1};
    const int dy[] = {1, -1, 0, 0};

    while (!q.empty()) {
        position now = q.front();
        int x        = now.x;
        int y        = now.y;
        char c       = A[x][y];
        int n        = B[x][y];
        q.pop_front();

        if (c == 'g' && n <= 2) {
            cout << "YES" << endl;
            return 0;
        }

        for (int i = 0; i < 4; i++) {
            int x2 = x + dx[i];
            int y2 = y + dy[i];
            if (x2 < 0 || x2 >= H || y2 < 0 || y2 >= W) continue;

            bool wall = (A[x2][y2] == '#');
            int dist  = n + wall;

            if (dist < B[x2][y2]) {
                B[x2][y2] = dist;
                if (wall)
                    q.push_back({x2, y2});
                else
                    q.push_front({x2, y2});
            }
        }
    }

    cout << "NO" << endl;
}