#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int f(int x){
	int ans = 0;
	while(x%2 == 0){
		x /= 2;
		ans++;
	}
	return ans;
}

int main() {
    ll N, M;
    cin >> N >> M;
    vector<ll> A(N);
    rep(i, N) {
        int a;
        cin >> a;
        A[i] = a / 2;
    }

		int t = f(A[0]);
		rep(i,N){
			if(f(A[i]) != t){
				cout << 0 << endl;
				return 0;
			}
		}

		ll l = 1;
		rep(i,N){
			l = lcm(l,A[i]);
			if(l>M){
				cout << 0 << endl;
				return 0;
			}
		}
		cout << M/l - M/(2*l) << endl;
}