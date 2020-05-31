#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;
    vec<int> l(N), r(N);
    rep(i, N) cin >> l[i] >> r[i];
    sort(all(l)), sort(all(r));

    int R, L;
    if (N % 2 == 1) {
        R = r[N / 2];
        L = l[N / 2];
    } else {
        R = r[(N - 1) / 2] + r[N / 2];
        L = l[(N - 1) / 2] + l[N / 2];
    }
    cout << R - L + 1 << endl;
}
