#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N,Q;
	cin >> N >> Q;
  vector<string> ans(N);
	rep(i,N) ans[i] = string(N,'N');

	rep(q,Q){
		int x;
		cin >> x;

		if(x == 1){
			int a,b;
			cin >> a >> b;
			a--;b--;
			ans[a][b] = 'Y';
		} else if(x==2){
			int a;cin>>a;a--;
			rep(i,N){
				if(ans[i][a] == 'Y') ans[a][i] = 'Y';
			}
		} else if(x==3) {
			int a;cin >> a;a--;
			vector<int> Ys;
			rep(i,N){
				if(ans[a][i] == 'Y') Ys.push_back(i);
			}
			for(auto e:Ys){
					rep(i,N){
						if(ans[e][i] == 'Y' && i != a){
							ans[a][i] = 'Y';
						}
					}
			}
		}
	}
		rep(i,N){
			ans[i][i] = 'N';
			cout << ans[i] << endl;
		}
}