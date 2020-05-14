#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    ll N, K;
    cin >> N >> K;
    vec<ll> A(N);
    rep(i, N) {
        cin >> A[i];
        --A[i];
    }
    int logK = 0;
    while ((1LL << logK) < K)
        ++logK;
    vec<vec<int>> dbl(logK+1, vec<int>(N));
    rep(i, N) dbl[0][i] = A[i];

    for (int i = 0; i < logK; ++i) {
        for (int j = 0; j < N; ++j) {
            dbl[i + 1][j] = dbl[i][dbl[i][j]];
        }
    }
    
    int now = 0;
    for (int i = 0; i < logK; ++i) {
        if(K&1) now = dbl[i][now];
        K = (K>>1);
    }
    cout << now + 1 << endl;
}
