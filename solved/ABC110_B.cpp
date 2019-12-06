#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	int N,M,X,Y;
	cin >> N >> M >> X >> Y;
  vector<int> x(N);
  vector<int> y(M);
  rep(i,N) cin >> x[i];
  rep(i,M) cin >> y[i];

  int xmax = *max_element(all(x));
  int ymin = *min_element(all(y));

  if(xmax < Y && ymin >X && xmax<ymin){
    cout << "No War" << endl;
  } else {
    cout << "War" << endl;
  }
}