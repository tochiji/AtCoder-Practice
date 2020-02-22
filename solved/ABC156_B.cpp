#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
	int N,K;
	cin >> N >> K;
  int keta = 0;
	while(pow(K,keta)<=N){
		keta++;
	}
	cout << keta << endl;
}