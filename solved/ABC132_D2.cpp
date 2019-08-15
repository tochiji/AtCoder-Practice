// nCk combination 組み合わせ 二項定理 パスカルの三角形 modのpが素数でなくても行ける
// https://qiita.com/drken/items/3b4fdf0a78e7a138cd9a
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const int MOD = 1000000007;
const int MAXIMAM = 2147480000;

const int MAX = 2001;
// main関数の中で宣言すると、スタックに乗るためSegmentation faultが出る。
// ヒープ領域に乗せたいから、グローバルで宣言すること。
// main関数の中で使いたいなら、vectorで宣言する。
// https://teratail.com/questions/168143
ll tri[MAX][MAX] = {}; 

int main() {
    int N, K;
    cin >> N >> K;
    ll BLUE = K;
    ll BLUE_BETWEEN = K - 1;
    ll RED = N - K;
    ll RED_SPACES = RED + 1;

    // vector<vector<ll>> tri(N+1,vector<ll>(N+1));
    tri[0][0] = 1;

    for(int n=1;n<=N;n++){
        for(int k=0;k<=n;k++){
            if(k == 0){                                                
                tri[n][k] = tri[n-1][k];
            } else {
                tri[n][k] = (tri[n-1][k] + tri[n-1][k-1]) % MOD;
            }
        }
    }

    for(int i=1;i<=K;i++){
        cout << (tri[RED_SPACES][i] * tri[BLUE_BETWEEN][i-1]) % MOD << endl;
    }
}