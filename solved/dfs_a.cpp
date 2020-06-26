#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int H,W;
    cin >> H >> W;
    vec<string> c(H);
    rep(i,H) cin >> c[i];
    int sh = -1,sw = -1;
    rep(i,H)rep(j,W){
        if(c[i][j] == 's'){
            sh = i,sw = j;
            c[i][j] = '.';
            break;
        }
        if(sh != -1) break;
    }

    int ans = false;
    function<void(int,int)> dfs = [&](int h,int w){
        if(h<0||w<0||h>=H||w>=W) return;
        if(c[h][w] == '#') return;
        if(c[h][w] == 'g'){
            ans = true;
            return;
        }

        c[h][w] = '#';
        dfs(h+1,w);
        dfs(h-1,w);
        dfs(h,w+1);
        dfs(h,w-1);
    };
    dfs(sh,sw);
    cout << (ans?"Yes": "No") << endl;
}
