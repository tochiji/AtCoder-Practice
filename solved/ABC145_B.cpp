#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N;
	string S;
	cin >> N;
	cin >> S;
  if(N%2 == 1) {
		cout << "No" << endl;
	} else {
		bool ans = true;
        rep(i, N/2){
					if(S[i] != S[i+(N/2)]) ans = false;
				}
				if(ans){
					cout << "Yes" << endl;
				} else {
					cout << "No" << endl;
				}
    }
}