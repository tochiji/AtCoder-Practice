#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
#define debug(x) cout << #x << "=" << x << endl;
#define vdebug(v) \
    { \
        cout << #v << "=" << endl; \
        rep(i_debug, v.size()) { \
            cout << v[i_debug] << ","; \
        } \
        cout << endl; \
    }
#define mdebug(m) \
    { \
        cout << #m << "=" << endl; \
        rep(i_debug, m.size()) { \
            rep(j_debug, m[i_debug].size()) { \
                cout << m[i_debug][j_debug] << ","; \
            } \
            cout << endl; \
        } \
    }
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> P(N);
    vector<int> Q(N);
    rep(i, N) cin >> P[i];
    rep(i, N) cin >> Q[i];
    vector<int> A(N);
    copy(all(P), A.begin());
    sort(all(A));

    int i = 0;
    map<vector<int>,int> m;
    do {
        i++;
        m[A] = i;
    } while (next_permutation(A.begin(), A.end()));

    for (const auto e : m) {
        vdebug(e.first);
        debug(e.second);
    }

    cout << abs(m[P] - m[Q]) << endl;
}