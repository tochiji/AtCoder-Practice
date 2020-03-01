#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    vector<vector<int>> A(3, vector<int>(3, 0));
    rep(i, 3) cin >> A[i][0] >> A[i][1] >> A[i][2];
    int N;
    cin >> N;
    rep(i, N) {
        int b;
        cin >> b;
        rep(h, 3) rep(w, 3) {
            if (A[h][w] == b) A[h][w] = 0;
        }
    }

    bool flag = false;
    if (A[0][0] + A[0][1] + A[0][2] == 0) flag = true;
    if (A[1][0] + A[1][1] + A[1][2] == 0) flag = true;
    if (A[2][0] + A[2][1] + A[2][2] == 0) flag = true;
    if (A[0][0] + A[1][0] + A[2][0] == 0) flag = true;
    if (A[0][1] + A[1][1] + A[2][1] == 0) flag = true;
    if (A[0][2] + A[1][2] + A[2][2] == 0) flag = true;
    if (A[0][0] + A[1][1] + A[2][2] == 0) flag = true;
    if (A[0][2] + A[1][1] + A[2][0] == 0) flag = true;

		if(flag){
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
}