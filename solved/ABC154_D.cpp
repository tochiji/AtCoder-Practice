#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<double> p(N);
    rep(i, N) {
        cin >> p[i];
        p[i] = (p[i] + 1) / 2.0;
    }
    vector<double> ac(N, 0.0);
    double sm = 0.0;
    rep(i, K) sm += p[i];
    ac[K - 1]  = sm;
    double ans = sm;
    for (int i = K; i < N; i++) {
        ac[i] = ac[i - 1] - p[i - K] + p[i];
        ans   = max(ans, ac[i]);
    }
    cout << fixed << setprecision(9);
    cout << ans << endl;
}