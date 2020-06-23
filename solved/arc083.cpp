#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;

    vec<vec<int>> A(N, vec<int>(N));
    vec<vec<int>> K(N, vec<int>(N));

    ll sm = 0;
    rep(i, N) rep(j, N) {
        cin >> A[i][j];
        sm += A[i][j];
    }
    K = A;

    vec<vec<int>> Checked(N, vec<int>(N, false));
    function<void(int)> warshall_floyd = [&](int n) {
        for (int k = 0; k < n; k++) {            // 経由する頂点
            for (int i = 0; i < n; i++) {        // 始点
                for (int j = 0; j < n; j++) {    // 終点
                    if (K[i][j] == K[i][k] + K[k][j] && i != k && j != k
                        && Checked[i][j] == false) {
                        sm -= K[i][j];
                        Checked[i][j] = true;
                    }
                    K[i][j] = min(K[i][j], K[i][k] + K[k][j]);
                }
            }
        }
    };

    warshall_floyd(N);
    rep(i, N) rep(j, N) {
        if (A[i][j] != K[i][j]) {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << sm/2 << endl;
}
