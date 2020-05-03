#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

char ans[(int)1e5 + 5];
int N, A, B, C;

void dfs(int n, int a, int b, int c, vec<string> &s) {
    if (n == N) {
        cout << "Yes" << endl;
        rep(i, N) cout << ans[i] << endl;
        exit(0);
    }

    if (s[n] == "AB") {
        if (b != 0) ans[n] = 'A', dfs(n + 1, a + 1, b - 1, c, s);
        if (a != 0) ans[n] = 'B', dfs(n + 1, a - 1, b + 1, c, s);
    }
    if (s[n] == "BC") {
        if (c != 0) ans[n] = 'B', dfs(n + 1, a, b + 1, c - 1, s);
        if (b != 0) ans[n] = 'C', dfs(n + 1, a, b - 1, c + 1, s);
    }
    if (s[n] == "AC") {
        if (a != 0) ans[n] = 'C', dfs(n + 1, a - 1, b, c + 1, s);
        if (c != 0) ans[n] = 'A', dfs(n + 1, a + 1, b, c - 1, s);
    }
}

int main() {
    cin >> N >> A >> B >> C;
    vec<string> s(N);
    rep(i,N) cin >> s[i];
    dfs(0, A, B, C, s);
    cout << "No" << endl;
}
