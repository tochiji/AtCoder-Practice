#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;

    vec<vec<int>> G(N);
    rep(i, N - 1) {
        int a, b;
        cin >> a >> b;
        --a, --b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vec<int> B(N, -1);
    vec<int> W(N, -1);
    B[0]     = 0;
    W[N - 1] = 0;

    function<void(int,int,int)> dfs = [&](int now, int nowd, int color) {
        if(color == 1) B[now] = nowd;
        else if(color == 2) W[now] = nowd;

        for (auto e : G[now]) {
            bool isBlack = color == 1 && B[e] != -1;
            bool isWhite = color == 2 && W[e] != -1;
            if (isBlack || isWhite) continue;
            dfs(e,nowd+1,color);
        }
    };
    dfs(0,0,1);
    dfs(N-1,0,2);

    int ans = 0;
    rep(i,N){
        if(B[i]<=W[i]) ++ans;
        else --ans;
    }
    if(ans>0) cout << "Fennec" << endl;
    else cout << "Snuke" << endl;
}
