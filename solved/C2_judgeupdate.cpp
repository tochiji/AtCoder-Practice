#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int a1, a2, a3;
int ans = 0;

void dfs(int a, int b, int c) {
    //箱を載せていく順番で考えるんだね〜
    //右の箱の数が、左の箱の数を超えちゃだめなんだね〜
    //入力例2の図の数と混合したらだめなんだね〜
    if(a<b||a<c||b<c) return;
    if(a>a1||b>a2||c>a3) return;
    if(a+b+c == a1+a2+a3) {
        ++ans;
        return;
    }

    dfs(a+1,b,c);
    dfs(a,b+1,c);
    dfs(a,b,c+1);
}

int main() {
    cin >> a1 >> a2 >> a3;
    dfs(0, 0, 0);
    cout << ans << endl;
}