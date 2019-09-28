#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++) 
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

struct P {
    int count;
    int index;

    bool operator<(const P &another) const {
            return count < another.count;
    };
};

int main() {
	int N;
	cin >> N;
	vector<P> A(N);
	rep(i,N){
		cin >> A[i].count;
		A[i].index = i;
	}
	sort(all(A));
	rep(i,N){
		printf("%d ",A[i].index + 1);
	}
}