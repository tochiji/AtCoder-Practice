#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    rep(i, N) cin >> A[i];
		vector<int> L(N);
		vector<int> R(N);

		rep(i,N){
			if(i==0){
				L[i] = A[i];
			} else {
				L[i] = __gcd(L[i-1],A[i]);
			}
		}

		for(int i=N-1;i>=0;i--){
			if(i==N-1){
				R[i] = A[i];
			} else{
				R[i] = __gcd(A[i],R[i+1]);
			}
		}

		int ans = 0;
		rep(i,N){
			if(i==0){
				ans = max(ans,R[i+1]);
			}else if(i==N-1){
				ans = max(ans,L[i-1]);
			} else{
				ans = max(ans,__gcd(L[i-1],R[i+1]));
			}
		}

		cout << ans << endl;
}