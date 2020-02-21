#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

struct P {
    ll X;
    ll L;

    bool operator<(const P &another) const {
        return X < another.X;
    };
};

int main() {
    ll N;
    cin >> N;
    vector<P> A(N);
    rep(i, N) cin >> A[i].X >> A[i].L;
    sort(all(A));

		// rep(i,N) cout << A[i].X << " " << A[i].L << endl;

    ll delc = 0;
    P b      = A[0];
    for (int i = 1; i < N; i++) {
        if (b.X + b.L > A[i].X - A[i].L) {
            delc++;
            if (b.X + b.L > A[i].X + A[i].L) {
                b = A[i];
            }
        } else {
					b = A[i];
				}
    }
    cout << N-delc << endl;
}