#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef pair<int, int> P;

int main() {
    int n;
    cin >> n;

    vector<P> p(n);
    rep(i, n) cin >> p[i].first >> p[i].second;
    sort(p.begin(),p.end());

    map<P, int> diffs;

    rep(i, n - 1) {
        for (int j = i + 1; j < n; j++) {
            int diffx = p[j].first - p[i].first;
            int diffy = p[j].second - p[i].second;
            P diff(diffx,diffy);
            diffs[diff] += 1;
        }
    }

    int mx = 0;
    for (auto itr = diffs.begin(); itr != diffs.end(); ++itr) {
      mx = max(mx,itr->second);
    }
    cout << n - mx << endl;
}