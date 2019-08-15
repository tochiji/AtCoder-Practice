#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef pair<int, int> P;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];
    sort(A.begin(), A.end());
    int ans     = 0;
    int before  = 0;
    bool erased = true;
    rep(i, N) {
        if (before == A[i] && erased)
            erased = false;
        else if (before == A[i] && !erased)
            erased = true;
        else if (before != A[i] && erased) {
            before = A[i];
            erased = false;
        }
        else if (before != A[i] && !erased) {
            ans += 1;
            before = A[i];
        }
    }
    if (!erased)
        ans += 1;
    cout << ans << endl;
}