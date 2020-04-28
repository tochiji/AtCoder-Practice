#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int H, W;
    cin >> H >> W;
    vec<string> s(H);
    rep(i, H) cin >> s[i];
    vec<vec<int>> ans(H, vec<int>(W, 0));

    rep(i, H) {
        for (int j = 0; j < W; ++j)
            if (s[i][j] == '#') ans[i][j] = 1;
        for (int j = 1; j < W; ++j)
            if (s[i][j] == '#') ans[i][j] = ans[i][j - 1] + 1;
        for (int j = W - 2; j >= 0; --j)
            if (s[i][j] == '#') ans[i][j] = max(ans[i][j], ans[i][j + 1]);
    }

    rep(j, W) {
        for (int i = 1; i < H; ++i)
            if (s[i][j] == '#') ans[i][j] = max(ans[i][j], ans[i - 1][j] + 1);
        for (int i = H - 2; i >= 0; --i)
            if (s[i][j] == '#') ans[i][j] = max(ans[i][j], ans[i + 1][j]);
    }

    rep(i, H) rep(j, W) {
        if (ans[i][j] == 1) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
