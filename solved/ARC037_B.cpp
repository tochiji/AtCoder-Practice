#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int N, M;
vector<vector<int>> G;
vector<bool> Visited;
int ans = 0;

bool dfs(int n, int prev, bool result) {
    Visited[n] = true;
    int ret    = true;

    for (int i = 0; i < G[n].size(); i++) {
        int nextN = G[n][i];
        if (nextN == prev) {
            continue;
        }
        else if (Visited[nextN]) {
            result = false;
        }
        else if (!Visited[nextN]) {
            result = dfs(nextN, n, result);
        }
    }
    return result;
}

int main() {
    cin >> N >> M;
    G.resize(N);
    Visited.resize(N);

    rep(i, M) {
        int from, to;
        cin >> from >> to;
        from--;
        to--;

        G[from].push_back(to);
        G[to].push_back(from);
    }

    for (int i = 0; i < N; i++) {
        if (!Visited[i]) {
            if(dfs(i, i, true)) ans += 1;
        }
    }
    cout << ans << endl;
}