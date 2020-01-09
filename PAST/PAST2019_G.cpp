#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define r3(i) for (int i = 0; i < 3; i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int happy[12][12];

int main() {
    int N;
    cin >> N;
    rep(i, 12) rep(k, 12) happy[i][k] = 0;

    rep(i, N) rep(k, N - i -1) {
        cin >> happy[i][k + i + 1];
    }

    int ans  = -10000000;
    string g = "0000000000";
    while (true) {
        int tmpans = 0;
        vector<vector<int>> group(3);

        rep(i, 10) {
            group[g[i] - '0'].push_back(i);
        }

        rep(i, 3) {
            int size = group[i].size();
            rep(s, size) rep(k, s) {
                tmpans += happy[group[i][k]][group[i][s]];
            }
        }
        ans = max(ans, tmpans);

        if (g == "2222222222") {
            break;
        } else {
            bool kuriage = false;
            rep(i, 10) {
                kuriage = false;
                if (g[i] == '0') {
                    g[i] = '1';
                } else if (g[i] == '1') {
                    g[i] = '2';
                } else if (g[i] == '2') {
                    g[i]    = '0';
                    kuriage = true;
                }

                if (!kuriage) break;
            }
        }
    }

    cout << ans << endl;
}