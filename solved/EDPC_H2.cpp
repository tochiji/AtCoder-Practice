#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
const ll MOD = 1000000007;

struct mint {
    ll x;  // cout << ans.x << endl; で出力する
    mint(ll x = 0) : x((x % MOD + MOD) % MOD) {
    }
    mint operator-() const {
        return mint(-x);
    }
    mint &operator+=(const mint a) {
        if ((x += a.x) >= MOD) x -= MOD;
        return *this;
    }
    mint &operator-=(const mint a) {
        if ((x += MOD - a.x) >= MOD) x -= MOD;
        return *this;
    }
    mint &operator*=(const mint a) {
        (x *= a.x) %= MOD;
        return *this;
    }
    mint operator+(const mint a) const {
        mint res(*this);
        return res += a;
    }
    mint operator-(const mint a) const {
        mint res(*this);
        return res -= a;
    }
    mint operator*(const mint a) const {
        mint res(*this);
        return res *= a;
    }
    mint pow(ll t) const {
        if (!t) return 1;
        mint a = pow(t >> 1);
        a *= a;
        if (t & 1) a *= *this;
        return a;
    }

    // for prime MOD
    mint inv() const {
        return pow(MOD - 2);
    }
    mint &operator/=(const mint a) {
        return (*this) *= a.inv();
    }
    mint operator/(const mint a) const {
        mint res(*this);
        return res /= a;
    }
};

int main() {
  int H,W;
    cin >> H >> W;
    vector<string> a(H);
    vector<vector<mint>> dp(H,vector<mint>(W,0));
    rep(i,H) cin >> a[i];
    rep(h,H)rep(w,W){
      if(a[h][w] == '#'){
          dp[h][w] = 0;
          continue;
      }
      if(h==0 && w==0) dp[h][w] = 1;
      else if(h == 0 && w != 0)
          dp[h][w] = dp[h][w - 1];
      else if (h != 0 && w == 0)
          dp[h][w] = dp[h-1][w];
      else {
        dp[h][w] = dp[h-1][w] + dp[h][w-1];
      }
    }
    cout << dp[H - 1][W - 1].x << endl;
}