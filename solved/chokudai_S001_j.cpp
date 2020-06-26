#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

// BIT<ll> bit(N); などで初期化
template <typename T>
struct BIT {
    int n; 
    vector<T> bit; 
    BIT(int n_) : n(n_ + 1), bit(n, 0) {}
 
    void add(int i, T x) {
        for (int idx = i; idx < n; idx += (idx & -idx)) {
            bit[idx] += x;
        }
    }
 
    T sum(int i) {
        T s(0);
        for (int idx = i; idx > 0; idx -= (idx & -idx)) {
            s += bit[idx];
        }
        return s;
    }
};

int main() {
    int N;
    cin >> N;
    BIT<ll> bit(N);
    ll ans = 0;
    rep(i,N){
      ll a;
      cin >> a;
      ans += i - bit.sum(a);
      bit.add(a,1);
    }
    cout << ans << endl;
}
