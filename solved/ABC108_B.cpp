#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int x1,y1,x2,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int A = x2 - x1;
	int B = y2 - y1;
	
	int x3 = x2 - B;
	int y3 = y2 + A;
	int x4 = x3 - A;
	int y4 = y3 - B;

	printf("%d %d %d %d",x3,y3,x4,y4);
}