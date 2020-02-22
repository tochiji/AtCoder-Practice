#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
	int N;
	cin >> N;
  vector<int> A(N);
	rep(i,N) cin >> A[i];
	bool ans = true;
	rep(i,N){
		if(A[i]%2 == 0){
			if(!(A[i]%3 == 0 || A[i]%5==0)){
				ans = false;
			}
		}
	}
	if(ans){
        cout << "APPROVED" << endl;
    } else {
        cout << "DENIED" << endl;
        }
}