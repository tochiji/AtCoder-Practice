#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    deque<int> V(N);
    rep(i, N) cin >> V[i];

    int ans = 0;
    rep(a, min(K + 1, N + 1)) rep(b, min(K + 1, N + 1) - a) {
        int del = K - (a + b);
        vector<int> j;
        rep(i, a) j.push_back(V[i]);
        rep(i, b) j.push_back(V[N - 1 - i]);
        
        sort(all(j));
        rep(i, del) {
            if (i >= j.size()) break;
            if (j[i] < 0) j[i] = 0;
        }
        ans = max(ans, accumulate(all(j), 0));
    }
    cout << ans << endl;
}