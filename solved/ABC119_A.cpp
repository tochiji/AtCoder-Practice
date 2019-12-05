#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	string S;
	cin >> S;
  int yyyy = stoi(S.substr(0,4));
  int mm = stoi(S.substr(5,2));
  int dd = stoi(S.substr(8,2));
  cout << mm << endl;
  if(yyyy >= 2020){
    cout << "TBD" << endl;
  } else if(yyyy == 2019 && mm >= 5){
    cout << "TBD" << endl;
  } else {
    cout << "Heisei" << endl;
  }
}