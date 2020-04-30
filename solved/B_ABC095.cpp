#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N,X;
    cin >> N >> X;
    vec<int> m(N);
    rep(i, N) cin >> m[i];
    ll sum = accumulate(all(m),0);
    sort(all(m));
    cout << N + (X-sum)/m[0] << endl;
}
