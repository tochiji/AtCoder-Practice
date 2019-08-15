#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> p(N);
  vector<int> psort(N);
  rep(i,N)  cin >> p[i];
  copy(all(p),psort.begin());
  sort(all(psort));

  int diff = 0;
  rep(i,N){
    if(p[i] != psort[i]) diff++;
  }

  if(diff <= 2){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  
}