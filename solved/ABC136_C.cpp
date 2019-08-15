#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    bool ans   = true;
    int mx = 0;
    rep(i, N) {
        int H;
        cin >> H;
        if (H >= mx - 1) {
            mx = max(mx,H);
        }
        else {
            ans = false;
            break;
        }
    }

    if (ans) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}