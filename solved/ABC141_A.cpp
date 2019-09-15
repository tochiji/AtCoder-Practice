#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
	string S;
	cin >> S;
	string s = "Sunny";
	string c = "Cloudy";
	string r = "Rainy";
	if(S == s){
		cout << c << endl;
	} else if(S == c){
		cout << r << endl;
	} else {
		cout << s << endl;
	}
}