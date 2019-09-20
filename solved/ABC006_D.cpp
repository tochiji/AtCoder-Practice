#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> c(N);
    rep(i, N) cin >> c[i];

    vector<int> ans(N + 1, 1e9);
    ans[0]  = -1;
    int mai = 0;
    rep(i, N) {
        int index  = lower_bound(all(ans), c[i]) - ans.begin();
        ans[index] = min(c[i], ans[index]);
        mai        = max(mai, index);
    }
    cout << N - mai << endl;
}