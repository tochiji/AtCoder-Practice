#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    int ans = 0;

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) continue;
        int yakusu = 0;
        for (int k = 1; k <= i; k++) {
            if (i % k == 0) yakusu++;
        }
        if (yakusu == 8) ans++;
    }
    cout << ans << endl;
}