#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    map<string, int> mp;
    int ans = 0;
    rep(i, N) {
        for (int k = 1; k <= N - i; k++) {
            string t = S.substr(i, k);
            int n    = t.size();
            if (mp.count(t) == 0) {
                mp[t] = i;
            }
            else {
                if (i - n >= mp[t]) ans = max(ans, n);
            }
        }
    }
    cout << ans << endl;
}