#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int H, W;
vector<string> A;
struct position {
    int x;
    int y;
    int count;
};
queue<position> q;
int ans = 0;

int main() {
    cin >> H >> W;
    A.resize(H);

    rep(i, H) {
        cin >> A[i];
        for(int k=0;k<A[i].size();k++) {
            if (A[i][k] == '#') q.push({i, k, 0});
        }
    }

    while (!q.empty()) {
        position now = q.front();
        int x        = now.x;
        int y        = now.y;
        int count    = now.count;
        ans = max(ans,count);
        q.pop();

        if (x != 0 && A[x - 1][y] != '#') {
            q.push({x - 1, y, count + 1});
            A[x - 1][y] = '#';
        }
        if (y != 0 && A[x][y - 1] != '#') {
            q.push({x, y - 1, count + 1});
            A[x][y - 1] = '#';
        }
        if (x != H - 1 && A[x + 1][y] != '#') {
            q.push({x + 1, y, count + 1});
            A[x + 1][y] = '#';
        }
        if (y != W - 1 && A[x][y + 1] != '#') {
            q.push({x, y + 1, count + 1});
            A[x][y + 1] = '#';
        }
    };
    cout << ans << endl;
}