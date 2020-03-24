#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
	string S;
	cin >> S;
	int N = S.size();
	bool flag = true;
	for(int i=0;i<=N/2;i++){
		if(S[i] != S[N-i-1]) flag = false;
	}
	for(int i=0;i<=(N-1)/4;i++){
		if(S[i] != S[(N-1)/2-i-1]) flag = false;
	}

	string S2 = S.substr((N+3)/2-1);
	int N2 = S2.size();
	for(int i=0;i<=N2/2;i++){
		if(S2[i] != S2[N2-i-1]) flag = false;
	}
	
	cout << (flag?"Yes":"No") << endl;
}