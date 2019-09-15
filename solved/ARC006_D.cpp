#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

vector<string> c;
int A = 0;
int B = 0;
int C = 0;

struct place {
    int h;
    int w;
};

void bfs(int h, int w) {
    int count = 0;
    queue<place> q;
    q.push({h, w});

    while (!q.empty()) {
        place n = q.front();
        q.pop();
        int h = n.h;
        int w = n.w;
        
        for (int e : {-1, 0, 1}) for (int d : {-1, 0, 1}) {
                if (c[h - e][w - d] == 'o') {
                    q.push({h - e, w - d});
                    count++;
                }
                c[h - e][w - d] = '.';
            }
        }

        for (int i = 1; i <= 143; i++) {
            if (12 * i * i == count) {
                A++;
                return;
            }
            else if (16 * i * i == count) {
                B++;
                return;
            }
            else if (11 * i * i == count) {
                C++;
                return;
            }
        }
    }

    int main() {
        int H, W;
        cin >> H >> W;
        c.resize(H);
        rep(i, H) cin >> c[i];

        rep(h, H) rep(w, W) {
            if (c[h][w] == 'o') bfs(h, w);
        }

        printf("%d %d %d\n", A, B, C);
    }