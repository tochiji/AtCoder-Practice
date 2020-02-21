#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int H, W;
vector<string> S;
struct position {
    int x;
    int y;
    int count;
};
queue<position> q;

int main() {
    cin >> H >> W;
    S.resize(H);
    rep(i, H) cin >> S[i];

    int mx = 0;
    rep(h, H) rep(w, W) {
        if (S[h][w] == '#') continue;

        vector<string> A(H);

        copy(all(S), A.begin());
        q.push({h,w,0});

        while (!q.empty()) {
            position now = q.front();
            int x        = now.x;
            int y        = now.y;
            int count    = now.count;
            mx = max(mx,count);
            q.pop();

            A[x][y] = '#';
            bool flag = false;
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
        }
    }

    cout << mx << endl;
}