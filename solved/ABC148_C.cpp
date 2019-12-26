#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	ll A,B;
	cin >> A >> B;
      auto gcd = [](ll a, ll b){
        while(1){
            swap(a,b);
            if(b == 0) return a;
            a%=b;
        }
    };
		auto lcm = [gcd](ll a, ll b){
			return a*b /gcd(a,b);
		};
		cout << lcm(A,B) << endl;
}