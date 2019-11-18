#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> h(N);
    rep(i, N) cin >> h[i];
    sort(all(h));
    int ans = 1e9;
    repi(i, N - K) {
        ans = min(ans, h[i + K - 1] - h[i]);
    }
    cout << ans << endl;
}