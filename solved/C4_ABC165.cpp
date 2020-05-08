#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int N, M, Q;
vec<int> a, b, c, d;
int ans = 0;

void dfs(vec<int> A) {
    if (A.size() == N) {
        int tmpans = 0;
        rep(i, Q) {
            if (A[b[i]] - A[a[i]] == c[i]) tmpans += d[i];
        }
        ans = max(ans, tmpans);
        return ;
    }
    for(int i=A.back();i<=M;++i){
        A.push_back(i);
        dfs(A);
        A.pop_back();
    }

}

int main() {
    cin >> N >> M >> Q;
    a.resize(Q);
    b.resize(Q);
    c.resize(Q);
    d.resize(Q);
    rep(i, Q) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
        --a[i],--b[i];
    }
    dfs(vec<int>(1, 1));
    cout << ans << endl;
}