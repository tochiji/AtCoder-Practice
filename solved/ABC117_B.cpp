#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> L(N);
    int mx = 0;
		int sum = 0;
    rep(i, N) {
        cin >> L[i];
        mx = max(mx, L[i]);
				sum += L[i];
    }
    if (sum - mx * 2 <= 0) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}