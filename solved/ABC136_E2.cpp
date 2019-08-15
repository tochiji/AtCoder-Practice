#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    ll sum = 0;
    rep(i, N) {
        cin >> A[i];
        sum += A[i];
    }

    set<int> Yakusu;
    for (int i = 1; i * i <= sum; i++) {
        if (sum % i == 0) {
            Yakusu.insert(i);
            Yakusu.insert(sum / i);
        }
    }

    int ans = 1;
    for(int x:Yakusu){
      vector<int> mods(N);
      rep(i,N) mods[i] = A[i]%x;
      // 1 15 9 9 5 3 →7で割った余りを取って→ 1 1 2 2 5 3 みたいな

      sort(all(mods)); 
      // 1 1 2 2 3 5 みたいな。
      // この場合は、各数値から合計14回引けば、全部割り切れる。
      // でも、足したり引いたりして帳尻を合わせないといけないので、
      // 引くだけはだめ。

      int total = accumulate(all(mods),0);
      // 余りを足し上げたtotalは、必ずxで割れる。→xは全体の約数だから。

      int left = N - total / x;
      // 左から何個目までを引くかを決める。

      int k = 0;
      rep(i,left) k+=mods[i];
      if(k<=K) ans = max(ans,x);
    }
    cout << ans << endl;
}