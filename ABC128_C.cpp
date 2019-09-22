#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> light(M);

    rep(i, M) {
        int K;
        cin >> K;
        rep(k, K) {
            int s;
            cin >> s;
            s--;
            light[i].push_back(s);
        }
    }

    vector<int> p(M);
    rep(i, M) {
        cin >> p[i];
    }

    int ans = 0;
    rep(i, pow(2, N)) {
        bool flag = true;
        rep(m, M) {
            bool isOn = (p[m] == 0);
            for (auto e : light[m]) {
                isOn = (i & (1 << e)) ? !isOn : isOn;
            }
            if (!isOn) {
                flag = false;
            }
        }
        if (flag) ans++;
    }
    cout << ans << endl;
}