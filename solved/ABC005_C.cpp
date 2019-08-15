#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
using namespace std;

int main() {
	int T,N;
	cin >> T >> N;
  vector<int> A(N);
  rep(i,N) cin >> A[i];
  int M;
  cin >> M;
  vector<int> B(M);
  rep(i,M) cin >> B[i];

  if(M > N){
    cout << "no" << endl;
    return 0;
  }

  int people = 0;
  rep(i,N){
    if(people == M) break;
    if(B[people]-A[i]<=T && B[people]-A[i] >=0){
      people++;
    }
  }
  if(people == M){
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }
}