#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

struct edge {
    int to;
    int id;
};

int N;
vector<vector<edge>> G;
vector<int> ans;

void dfs(int n, int p = 0, int bc = 0) {
    int nowColor = 1;
    rep(i, G[n].size()) {
        if(G[n][i].to == p) continue;
        if (nowColor == bc) nowColor++;
	    ans[G[n][i].id] = nowColor;
        dfs(G[n][i].to, n, nowColor);
        nowColor++;
    }
}

int main() {
    cin >> N;
    G.resize(N);
    ans.resize(N);

    rep(i, N - 1) {
        int from, to;
        cin >> from >> to;
        from--;
        to--;
        G[from].push_back({to, i});
    }
    dfs(0);

    int mx =0;
    rep(i,N-1) mx = max(mx,ans[i]);
    cout << mx << endl;
    rep(i,N-1){
        cout << ans[i] << endl;
    }
}
