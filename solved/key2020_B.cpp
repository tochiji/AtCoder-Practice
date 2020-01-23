#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

struct P {
    ll X;
    ll L;
    ll l;
    ll r;

    bool operator<(const P &another) const {
        return r < another.r;
    };
};

int main() {
    ll N;
    cin >> N;
    vector<P> A(N);
    rep(i, N) {
        cin >> A[i].X >> A[i].L;
        A[i].l = A[i].X - A[i].L;
        A[i].r = A[i].X + A[i].L;
    }
    sort(all(A));
		P now = A[0];
		int delc = 0;
		for(int i=1;i<N;i++){
			if(now.r > A[i].l){
				delc++;
			} else { 
				now = A[i];
			}
		}
    cout << N - delc << endl;
}