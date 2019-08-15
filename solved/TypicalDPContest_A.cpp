#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> p(N);
    rep(i, N) cin >> p[i];
    set<int> dp{0};
    rep(i, N) {
        auto temp = dp;
        for (auto j : temp)
            dp.insert(j + p[i]);
    }
    cout << dp.size() << endl;
}