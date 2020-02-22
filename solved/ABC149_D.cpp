#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N, K, R, S, P;
    cin >> N >> K >> R >> S >> P;
    string T;
    cin >> T;
		vector<bool> c(N,false);

    ll ans = 0;
    rep(i, N) {
        if (i >= K && T[i] == T[i - K] && !c[i-K]) {
						c[i] = true;
            continue;
        } else if (T[i] == 'r') {
            ans += P;
        } else if (T[i] == 's') {
            ans += R;
        } else if (T[i] == 'p') {
            ans += S;
        }
    }
    cout << ans << endl;
}