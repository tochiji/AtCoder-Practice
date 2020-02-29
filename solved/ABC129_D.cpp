#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int H,W;
    cin >> H >> W;
    vector<string> S(H);
    vector<vector<int>> wi(H, vector<int>(W, 0));
    vector<vector<int>> hi(H, vector<int>(W, 0));
    rep(i,H) cin >> S[i];
    rep(h,H){
      rep(w,W){
        if(S[h][w] == '#')continue;
        if(w == 0){
          wi[h][w] = 1;
          continue;
        }
        wi[h][w] = wi[h][w-1]+1;
      }
      rep(w,W){
        int rw = W-w-1;
        if (S[h][rw] == '#') continue;
        if(rw == W-1) continue;
        wi[h][rw] = max(wi[h][rw],wi[h][rw+1]);
      }
    }
    rep(w, W) {
        rep(h, H) {
            if (S[h][w] == '#') continue;
            if (h == 0){
              hi[h][w] = 1;
              continue;
            }
            hi[h][w] = hi[h-1][w] + 1;
        }
        rep(h, H) {
            int rh = H - h - 1;
            if (S[rh][w] == '#') continue;
            if (rh == H - 1) continue;
            hi[rh][w] = max(hi[rh][w],hi[rh+1][w]);
        }
    }
    int ans = 0;
    rep(h,H)rep(w,W){
      ans = max(ans,hi[h][w]+wi[h][w]);
    }
    cout << ans-1 << endl;
}