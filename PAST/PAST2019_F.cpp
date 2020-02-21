#include <bits/stdc++.h>
#include <algorithm>
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

struct P {
    string big;
		string small;

    bool operator<(const P &another) const {
        return small < another.small;
    };
};

int main() {
	string S;
	cin >> S;
  vector<P> ans;

	bool beforeend = true;
	string bigs = "";
	string smalls = "";
	rep(i,S.size()){
		if(isupper(S[i]) && beforeend){
			beforeend = false;
			bigs += S[i];
			smalls += tolower(S[i]);
		} else if (isupper(S[i]) && !beforeend){
			beforeend = true;
			bigs += S[i];
			smalls += tolower(S[i]);
			ans.push_back({bigs,smalls});
			bigs = "";
			smalls = "";
		} else{
			bigs += S[i];
			smalls += S[i];
		}
	}
	sort(all(ans));
	for(auto e:ans){
		cout << e.big;
	}
	cout << endl;
}