#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

#define debug(x) cout << #x << "=" << x << endl;
#define vdebug(v) { cout << #v << "=" << endl; rep(i_debug, v.size()) { cout << v[i_debug] << ",";}cout << endl; }
#define mdebug(m) { cout << #m << "=" << endl; rep(i_debug, m.size()) { rep(j_debug, m[i_debug].size()) { cout << m[i_debug][j_debug] << ","; } cout << endl; } }

int main() {
    int N, M;
    cin >> N >> M;
    vec<vec<int>> s(M, vec<int>());
    rep(i, M) {
        int k;
        cin >> k;
        rep(j, k) {
            int z;
            cin >> z;
            --z;
            s[i].push_back(z);
        }
    }


    vec<int> p(M);
    rep(i, M) cin >> p[i];

    int ans = 0;
    rep(i, 1 << N) {
        bool flag = true;
        rep(j, M) {
            int swich = 0;
            for (auto e : s[j]) {
                if (i & (1 <<e)) ++swich;
            }
            if(swich%2 != p[j]) flag = false;
        }
        if(flag)  ++ans;
    }
    cout << ans << endl;
}