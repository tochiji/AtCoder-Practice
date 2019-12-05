#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    if (M == 1 || N >= M) {
        cout << 0 << endl;
        return 0;
    }

    vector<int> X(M);
    rep(i, M) cin >> X[i];
    sort(all(X));
    vector<int> diff(M - 1);
    rep(i, M - 1) {
        diff[i] = X[i + 1] - X[i];
    }
    sort(all(diff));

    int ans = accumulate(all(diff), 0);
    rep(i, N - 1) {
        if (diff.size() - 1 > i) {
            ans -= diff[M - 2 - i];
        };
    }
    cout << ans << endl;
}