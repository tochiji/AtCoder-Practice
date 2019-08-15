#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;
    vector<ll> A(N);
    rep(i, N) cin >> A[i];

    ll x2 = 0;
    rep(i, N) {
        if (i & 1)
            x2 -= 2 * A[i];
        else
            x2 += 2 * A[i];
    }
    ll x = x2 / 2;

    rep(i, N) {
        if (i == 0) { cout << x << " "; }
        else if (i == N - 1) {
            x = 2 * A[i - 1] - x;
            cout << x << endl;
        }
        else {
            x = 2 * A[i - 1] - x;
            cout << x << " ";
        }
    }
}
