#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    ll N, M, K;
    cin >> N >> M >> K;

    vec<ll> A(N + 1,0);
    rep(i, N) cin >> A[i+1];
    rep(i, N+1) A[i + 1] += A[i];

    vec<ll> B(M + 1,0);
    rep(i, M) cin >> B[i+1];
    rep(i, M+1) B[i + 1] += B[i];

    ll ans = 0;
    int b_i = M;
    rep(i, N+1) {
        if (A[i] > K) break;
        int idx = upper_bound(all(B),K-A[i]) - B.begin();
        ans = max(ans,i+idx-1);
    }

    cout << ans << endl;
}
