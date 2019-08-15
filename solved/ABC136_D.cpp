#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    string S;
    cin >> S;
    int N = S.size();
    vector<int> ans(N, 0);

    int r = 0;
    rep(i, N) {
        if (S[i] == 'R') {
            r += 1;
        }
        else if (S[i] == 'L' && r >= 1) {
            ans[i] += r / 2;
            ans[i - 1] += r / 2;
            if (r % 2 == 1) {
                ans[i - 1]++;
            }
            r = 0;
        }
    }

    int l = 0;
    for (int i = N - 1; i >= 0; i--) {
        if (S[i] == 'L') {
            l += 1;
        }
        else if (S[i] == 'R' && l >= 1) {
            ans[i] += l / 2;
            ans[i + 1] += l / 2;
            if (l % 2 == 1) {
                ans[i + 1]++;
            }
            l = 0;
        }
    }
    rep(i, N) {
        cout << ans[i] << " ";
    }
    cout << endl;
}