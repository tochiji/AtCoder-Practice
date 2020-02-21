#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int H,W,N;
	cin >> H >> W >> N;
    cout << (N + max(H, W)-1) / max(H, W) << endl;
}