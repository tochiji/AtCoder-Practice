#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const int N = 10;
vector<string> A(10);
vector<string> B(10);

// 塗りつぶす
void dfs(int x, int y) {
    B[x][y] = 'x';
    if (x != 0 && B[x - 1][y] == 'o') dfs(x - 1, y);
    if (y != 0 && B[x][y - 1] == 'o') dfs(x, y - 1);
    if (x != 9 && B[x + 1][y] == 'o') dfs(x + 1, y);
    if (y != 9 && B[x][y + 1] == 'o') dfs(x, y + 1);
}

int main() {
    rep(i, N) cin >> A[i];

    bool flag;
    int debugCount = 0;

    rep(i, N) rep(j, N) {
        debugCount++;
        copy(A.begin(), A.end(), B.begin());
        B[j][i] = 'o';
        dfs(j, i);

        flag = true;
        rep(k, N) rep(z, N) {
            if (B[z][k] == 'o') flag = false;
        }
        if (flag) {
            puts("YES");
            return 0;
        }
    }
    puts("NO");
}