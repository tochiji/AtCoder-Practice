#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    ll tmpAll = 0;

    rep(i, N) {
        cin >> A[i];
        A[i] -= (i + 1);
    }
    sort(all(A));
    ll b;
    if (N % 2 == 1) {
        b = A[N / 2];
    } else {
        b = (A[N / 2] + A[(N / 2) - 1]) / 2;
    }

    ll ans = 0;
    rep(i, N) {
        ans += abs(A[i] - b);
    }
    cout << ans << endl;
}