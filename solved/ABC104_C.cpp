#include <bits/stdc++.h>
using namespace std;
int main() {
    int D, G, p[11], c[11];
    cin >> D >> G;
    for (int i = 0; i < D; ++i) {
        cin >> p[i] >> c[i];
    }

    int ans = 1e9;
    for (int mask = 0; mask < (1 << D); mask++) {
        int sum = 0, count = 0, max = 0;

        for (int i = 0; i < D; i++) {
            if (mask & (1 << i)) {
                sum += p[i] * 100 * (i + 1) + c[i];
                count += p[i];
            }
            else {
                max = i;
            }
        }

        int point = G - sum;
        if (point < 0) {
            ans = min(ans, count);
            continue;
        }

        int tmpCount = (point + (max + 1) * 100 - 1) / ((max + 1) * 100);
        if (tmpCount <= p[max]) {
            ans = min(ans, count + tmpCount);
        }
    }

    cout << ans << endl;
}