#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;

    vec<ll> A(N);
    rep(i, N) cin >> A[i];
    rep(i, N - 1) A[i + 1] += A[i];
    A.insert(A.begin(), 0);

    vec<ll> ans(N + 1);
    rep(i, N + 1) rep(j, i) {
        ans[i-j] = max(ans[i-j], A[i] - A[j]);
    }
    rep(i, N) {
        cout << ans[i + 1] << '\n';
    }
}
