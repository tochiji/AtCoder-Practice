#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

const int MAXN = 1005;
const int MAXV = MAXN * (MAXN - 1) / 2;
vector<vector<int>> to;
vector<vector<int>> id;

int toId(int i, int j) {
    if (i > j) swap(i, j);
    return id[i][j];
}

bool visited[MAXV];
bool calculated[MAXV];
int dp[MAXV];
int dfs(int v) {
    if (visited[v]) {
        if (!calculated[v]) return -1;
        return dp[v];
    }
    visited[v] = true;
    dp[v]      = 1;
    for (int u : to[v]) {
        int res = dfs(u);
        if (res == -1) return -1;
        dp[v] = max(dp[v], res + 1);
    }
    calculated[v] = true;
    return dp[v];
}

int main() {
    int N;
    cin >> N;
    vector<vector<int>> A(N, vector<int>(N - 1));
    rep(i, N) rep(j, N - 1) {
            cin >> A[i][j];
            --A[i][j];
    }
    int V = 0;
    id.resize(N, vector<int>(N));
    rep(i, N) rep(j, N) if (i < j) id[i][j] = V++;
    to.resize(V, vector<int>());

    rep(i, N) {
        rep(j, N - 1) A[i][j] = toId(i, A[i][j]);
        rep(j, N - 2) to[A[i][j + 1]].push_back(A[i][j]);
    }

    int ans = 0;
    rep(i, V) {
        int res = dfs(i);
        if (res == -1) {
            cout << -1 << endl;
            return 0;
        }
        ans = max(ans, dfs(i));
    }
    cout << ans << endl;
}