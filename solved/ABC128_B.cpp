#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

struct P {
    string s;
    int p;
		int index;

    bool operator<(const P &another) const {
        if (s == another.s)
            return p > another.p;
        else
            return s < another.s;
    };
};

int main() {
	int N;
	cin >> N;
	vector<P> rest(N);
	rep(i,N){
		cin >> rest[i].s >> rest[i].p;
		rest[i].index = (i + 1);
	}
	sort(all(rest));
	rep(i,N){
		cout << rest[i].index << endl;
	}
}