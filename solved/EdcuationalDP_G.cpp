#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

vector<vector<int>> G;
int dp[100005];

int dfs(int i){
    if(dp[i] != -1) return dp[i];
    int ans = 0;
    for(auto e:G[i]){
        ans = max(ans,dfs(e) + 1);
    }
    dp[i] = ans;
    return ans;
}

int main() {
    int N, M;
    cin >> N >> M;
    G.resize(N);
    rep(i,M){
        int x,y;
        cin >> x >> y;
        x--;y--;
        G[x].push_back(y);
    }

    rep(i,N) dp[i] = -1;
    int ans = 0;
    rep(i,N) ans = max(ans,dfs(i));
    cout << ans << endl;
}