#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

struct P {
    ll a;
    ll b;

    bool operator<(const P &another) const {
        if (a == another.a)
            return b < another.b;
        else
            return a < another.a;
    };
};

int main() {
	ll N,M;
	cin >> N >> M;
  vector<P> p(N);
	rep(i,N){
		cin >> p[i].a >> p[i].b;
	}

	sort(all(p));
	ll ans = 0;
	ll nokori = M;
	rep(i,N){
		if(nokori >= p[i].b){
			nokori -= p[i].b;
			ans+=p[i].a*p[i].b;
		} else {
			ans+=p[i].a*nokori;
			nokori=0;
		}
	}
	cout << ans << endl;
}