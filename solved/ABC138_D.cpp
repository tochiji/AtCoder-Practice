#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<vector<int>> G(N);
    rep(i, N - 1) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        G[a].push_back(b);
    }

    vector<ll> points(N, 0);

    rep(i, Q) {
        int p, x;
        cin >> p >> x;
        p--;
        points[p] += x;
    }

		rep(i,N){
			for(auto e:G[i]){
				points[e] += points[i];
			}
		}

    rep(i, N) cout << points[i] << " ";
		cout << endl;
}