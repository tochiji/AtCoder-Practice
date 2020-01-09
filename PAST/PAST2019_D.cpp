#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> A(N);
	map<int,int> m;
	rep(i,N){
		int a;
		cin >> a;
		m[a]++;
	}
	
	int t = 0;
	int n = 0;
	rep(i,N){
		if(m[i+1] == 0) n = i+1;
		if(m[i+1] == 2) t = i+1;
	}
	if(n==0){
		cout << "Correct" << endl;
	} else {
		cout << t << " " << n << endl;
	}
}