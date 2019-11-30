#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N, M, C;
    cin >> N >> M >> C;
    vector<int> B(M);
    rep(i, M) cin >> B[i];
    vector<vector<int>> A(N, vector<int>(M));
		int ans = 0;

    rep(n, N) {
			int check = C;
        rep(m, M) {
					int a;
					cin >> a;
					check+=(a*B[m]);
        }
				if(check > 0) ans++;
    }
		cout << ans << endl;
}