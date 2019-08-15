#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int H, W, N;
vector<string> A;
vector<string> B;
struct position {
    int x;
    int y;
    int n;
    int count;
};
queue<position> q;

int main() {
    cin >> H >> W >> N;
    A.resize(H);
    B.resize(H);

    rep(i, H) {
        cin >> A[i];
        int index = A[i].find("S");
        if (index != string::npos) {
            q.push({i, index, 1, 0});
        }
    }

    copy(A.begin(), A.end(), B.begin());

    while (!q.empty()) {
        position now = q.front();
        int x        = now.x;
        int y        = now.y;
        int P        = A[x][y];
        int n        = now.n;
        int count    = now.count;
        q.pop();

        if ((int)(P - '0') == n) {
            if ((int)(P - '0') == N) {
                cout << count << endl;
                break;
            }

            q = queue<position>();
            copy(A.begin(), A.end(), B.begin());
            n++;
        }

        B[x][y] = 'X';
        if (x != 0 && B[x - 1][y] != 'X') {
            q.push({x - 1, y, n, count + 1});
            B[x - 1][y] = 'X';
        }
        if (y != 0 && B[x][y - 1] != 'X') {
            q.push({x, y - 1, n, count + 1});
            B[x][y - 1] = 'X';
        }
        if (x != H - 1 && B[x + 1][y] != 'X') {
            q.push({x + 1, y, n, count + 1});
            B[x + 1][y] = 'X';
        }
        if (y != W - 1 && B[x][y + 1] != 'X') {
            q.push({x, y + 1, n, count + 1});
            B[x][y + 1] = 'X';
        }
    };
}