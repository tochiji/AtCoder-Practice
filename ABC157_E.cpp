#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int N, Q;
    string S;
    cin >> N >> S >> Q;
    vector<vector<int>> al(26, vector<int>(0));
    for (int i = 0; i < N; i++) {
        al[S[i] - 'a'].push_back(i);
    }

    rep(_, Q) {
        int o;
        cin >> o;
        if (o == 1) {
            int i;
            char x;
            cin >> i >> x;
            i--;
            al[x - 'a'].push_back(i);
            al[S[i] - 'a'][lower_bound(all(al[S[i] - 'a']), i)
                           - al[S[i] - 'a'].begin()] = -1;
            sort(all(al[x - 'a']));
            sort(all(al[S[i] - 'a']));
        } else {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            int ans = 0;
            rep(i, 26) {
                int index = lower_bound(all(al[i]), l) - al[i].begin();
                if (index >= al[i].size()) continue;
                if (al[i][index] <= r) ans++;
            }
            cout << ans << endl;
        }
    }
}