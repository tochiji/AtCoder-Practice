#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

struct str {
    string s;
    int counts;
};

vector<vector<str>> anss(11, vector<str>());

void f(int n) {
    vector<string> als = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
    for (auto e : anss[n - 1]) {
        string s = e.s;
        int c    = e.counts;
        for (int i = 0; i <= c + 1; i++) {
            anss[n].push_back({s + als[i], max(c, i)});
        }
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N;
    cin >> N;

    anss[0].push_back({"", -1});
    for (int i = 1; i <= N; i++)
        f(i);
    vector<string> ans;
    for (auto e : anss[N])
        ans.push_back(e.s);
    sort(all(ans));
    cout << ans.size() << endl;
    // for (auto e : ans)
        // cout << e << endl;
}