#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N + 1);
    vector<ll> B(N);
    rep(i, N + 1) cin >> A[i];
    rep(i, N) cin >> B[i];
    ll death = 0;

    for (int i = N - 1; i >= 0; i--) {
        for (int k = 1; k >=0; k--) {
            if (A[i + k] >= B[i]) {
                death += B[i];
                A[i + k] -= B[i];
                B[i] = 0;
            }
            else if (A[i + k] < B[i]) {
                death += A[i + k];
                B[i] -= A[i + k];
                A[i + k] = 0;
            }
        }
    }

    cout << death << endl;
}