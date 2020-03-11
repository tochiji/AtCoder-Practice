#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

template<typename T>
struct BIT {
  int n;
  vector<T> d;
  BIT(int n=0):n(n),d(n+1) {}
  void add(int i, T x=1) {
    for (i++; i <= n; i += i&-i) {
      d[i] += x;
    }
  }
  T sum(int i) {
    T x = 0;
    for (i++; i; i -= i&-i) {
      x += d[i];
    }
    return x;
  }
};

int main() {
    int N, Q;
    string S;
    cin >> N >> S >> Q;
    vector<BIT<int>> al(26,BIT<int>(N));
    rep(i,S.size()){
        int index = S[i] - 'a';
        al[index].add(i,1);
    }
    rep(_,Q){
        int q;
        cin >> q;
        if(q == 1){
            int i;
            char q;
            cin >> i >> q;
            i--;
            al[S[i]-'a'].add(i,-1);
            al[q-'a'].add(i,1);
            S[i] = q;
        } else {
            int l,r;
            cin >> l >> r;
            --l;--r;
            int ans = 0;
            rep(al_i,26){
                if(al[al_i].sum(r) - al[al_i].sum(l-1) > 0) ans++;
            }
            cout << ans << endl;
        }
    }
}
