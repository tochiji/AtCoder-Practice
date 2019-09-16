#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> H(N);
    rep(i, N) cin >> H[i];

    int c   = 0;
    int ans = 0;
    rep(i, N) {
        if (i == 0) continue;
        if (H[i - 1] >= H[i]) {
            c++;
            ans = max(ans, c);
        }
        else {
            c = 0;
        }
    }
    cout << ans << endl;
}