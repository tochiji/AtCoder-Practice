#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N, u, v;
    cin >> N >> u >> v;

    vector<vector<int>> G;
    G.resize(N);

    rep(i, N - 1) {
        int from, to;
        cin >> from >> to;
        from--;
        to--;

        G[from].push_back(to);
        G[to].push_back(from);
    }
}