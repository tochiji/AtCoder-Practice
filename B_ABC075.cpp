#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int H, W;
    cin >> H >> W;
    vec<string> S(H, "");
    rep(i, H) cin >> S[i];

    int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
    int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};

    rep(i, H) rep(j, W) {
        if(S[i][j] == '#') continue;
        int num = 0;
        for (int d = 0; d < 8; ++d) {
            int ni = i + dy[d];
            int nj = j + dx[d];

            if (ni < 0 or H <= ni) continue;
            if (nj < 0 or W <= nj) continue;
            if (S[ni][nj] == '#') num++;
        }
        S[i][j] = (char)(num+'0');
    }
    rep(i,H) cout << S[i] << endl;
}