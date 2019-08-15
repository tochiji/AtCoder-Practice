#include <bits/stdc++.h>
#define rep(i, n) for (int(i) = 0; (i) < (n); (i)++)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
    int n;
    cin >> n;
    vector<P> p(n);
    rep(i, n) cin >> p[i].second >> p[i].first;

    sort(p.begin(), p.end());
    ll work = 0;
    bool flag = true;
    rep(i,n){
        work += p[i].second;
        if (work > p[i].first) {
            flag = false;
            break;
        }
    }

    cout << (flag ? "Yes" : "No") << endl;
}