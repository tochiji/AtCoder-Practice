#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N, K;
    cin >> N >> K;
    vec<vec<int>> bk(4 * K, vec<int>(4 * K));
    rep(i, N) {
        int x, y;
        char c;
        cin >> x >> y >> c;
        if (c == 'B') x += K;
        ++bk[x % (2 * K)][y % (2 * K)];
    }
    rep(i,4*K)rep(j,4*K){
        bk[i][j] = bk[i%(2*K)][j%(2*K)];
    }

    rep(i, 4 * K-1) rep(j, 4 * K) {
        bk[i + 1][j] += bk[i][j];
    }
    rep(i, 4 * K) rep(j, 4 * K-1) {
        bk[i][j+1] += bk[i][j];
    }


    int ans = 0;
    rep(i,2*K)rep(j,2*K){
        int tmp = 0;
        tmp+=bk[i+K-1][j+K-1];
        if(i>0) tmp-=bk[i-1][j+K-1];
        if(j>0) tmp-=bk[i+K-1][j-1];
        if(i>0&&j>0) tmp+=bk[i-1][j-1];

        tmp+=bk[i+2*K-1][j+2*K-1];
        tmp-=bk[i+K-1][j+2*K-1];
        tmp-=bk[i+2*K-1][j+K-1];
        tmp+=bk[i+K-1][j+K-1];

        ans = max(ans,tmp);
    }
    cout << ans << endl;
}