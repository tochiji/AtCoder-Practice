#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	string S;
	cin >> S;
  int top = stoi(S.substr(0,2));
  int bottom = stoi(S.substr(2,2));

  bool topisYY = false;
  bool bottomisYY = false;
  if(top >=13 || top == 0) topisYY = true;
  if(bottom >=13 || bottom == 0) bottomisYY = true;

  if(topisYY && bottomisYY){
    cout << "NA" << endl;
  } else if(topisYY){
    cout << "YYMM" << endl;
  } else if(bottomisYY){
    cout << "MMYY" << endl;
  } else {
    cout << "AMBIGUOUS" << endl;
  }
}