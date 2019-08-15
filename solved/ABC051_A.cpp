#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    int K, S;
    cin >> K >> S;
    int ans = 0;

    rep(a, K + 1) {
        rep(b, K + 1) {
            int c = S - a - b;
            if (c >= 0 && c<=K) ans += 1;
        }
    }

    cout << ans << endl;
}