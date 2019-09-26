#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

// この開放だと計算量がN^2を超えるので、
// Nが 10^5のため間に合わない
int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    rep(i, N) cin >> A[i];

    int ans = 0;
    rep(del, N) {
        int g;
        if (del == 0) {
            g = A[1];
        }
        else {
            g = A[0];
        }

        rep(i, N) {
					if(i == del) continue;
          g = __gcd(g, A[i]);
        }
				ans = max(ans,g);
    }
		cout << ans << endl;
}