#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

struct city {
    int P;
    int Y;
    int i;

    bool operator<(const city &another) const {
        if (P == another.P)
            return Y < another.Y;
        else
            return P < another.P;
    };
};

int main() {
    int N, M;
    cin >> N >> M;
    vector<city> c(M);
    vector<vector<int>> ans(M);
    rep(i, M) {
        cin >> c[i].P >> c[i].Y;
        c[i].i = i;
    }
    sort(all(c));

    int before = -1;
    int cnt    = 1;
    rep(i, M) {
        int ci = c[i].P;

        if (ci == before)
            cnt++;
        else
            cnt = 1;

        before    = ci;
        int index = c[i].i;
        ans[index].push_back(ci);
        ans[index].push_back(cnt);
    }

    rep(i, M) printf("%06d%06d\n", ans[i][0], ans[i][1]);
}