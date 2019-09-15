#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N, K, Q;
    cin >> N >> K >> Q;

    vector<int> ans(N, 0);
    rep(i, Q) {
        int A;
        cin >> A;
        A--;
        ans[A]++;
    }

    rep(i, N) {
        int result = K - Q + ans[i];
        if (result > 0) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}