#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int N, ans = -100000000;
vector<vector<int>> happy(12, vector<int>(12));
vector<vector<int>> g(3);

void dfs(int now) {
    if (now == N) {
        int tmpans = 0;
        for (auto e : g) {
            rep(i, e.size()) for (int k = i + 1; k < e.size(); k++) {
                tmpans += happy[e[i]][e[k]];
            }
        }
        ans = max(ans, tmpans);
        return;
    }
    for (int i = 0; i < 3; i++) {
        g[i].push_back(now);
        dfs(now + 1);
        g[i].pop_back();
    }
}

int main() {
    cin >> N;
    rep(i, N) for (int j = i + 1; j < N; j++) {
        cin >> happy[i][j];
    }
    dfs(0);
    cout << ans << endl;
}