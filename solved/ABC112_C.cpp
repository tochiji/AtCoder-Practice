#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> x(N);
    vector<int> y(N);
    vector<int> h(N);
    rep(i, N) {
        cin >> x[i] >> y[i] >> h[i];
    }

    rep(cx, 101) rep(cy, 101) {
        int H = 0;
        rep(i, N) {
            if (h[i] != 0) H = h[i] + abs(x[i] - cx) + abs(y[i] - cy);
        }
        int flag = true;
        rep(i, N) {
            if (h[i] != max(H - abs(x[i] - cx) - abs(y[i] - cy), 0))
                flag = false;
        }
        if (flag) {
            printf("%d %d %d\n", cx, cy, H);
        }
    }
}