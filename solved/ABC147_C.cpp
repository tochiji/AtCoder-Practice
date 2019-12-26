#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

struct P {
    int x;
    int y;
};

int main() {
	int N;
	cin >> N;
	vector<vector<P>> w(N);

  rep(i,N){
		int A = 0;
		cin >> A;
		rep(a,A){
			int x,y;
			cin >> x >> y;
			x--;
			w[i].push_back({x,y});
		}
	}

	int ans = 0;
	rep(i,pow(2,N)){
		bool syouziki = true;
		rep(k,N){
				if(bitset<16>(i)[k] == 0) continue;
				for(auto e:w[k]){
				int x = e.x;
				int y = e.y;
				if(y != bitset<16>(i)[x]){
					syouziki = false;
					break;
				}
			}
		}
		if(syouziki) ans = max(ans,(int)bitset<16>(i).count());
	}
	cout << ans << endl;
}