// ABC 045 C - たくさんの数式
// https://atcoder.jp/contests/arc061/tasks/arc061_a
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

vector<ll> split(string s, string c) {
    vector<ll> ret;
    for (int i = 0, n; i <= s.length(); i = n + 1) {
        n = s.find_first_of(c, i);
        if (n == string::npos) n = s.length();
        string tmp = s.substr(i, n - i);
        ret.push_back(stoll(tmp));
    }
    return ret;
}

string S;
ll ans = 0;

void dfs(string s, int i) {
    if (i + 1 == S.length()) {
        if (s[s.length() - 1] == '@') return;
        if (regex_search(s, regex("\\@\\@"))) return;
        vector<ll> nums = split(s, "@");
        ans += accumulate(nums.begin(), nums.end(), 0LL);
        return;
    }
    dfs(s + S.substr(i + 1, 1), i + 1);
    dfs(s + "@" + S.substr(i + 1, 1), i + 1);
}

int main() {
    cin >> S;
    int maxp = S.size() & 1 ? (S.size() - 2) / 2 + 1 : (S.size() - 2) / 2;

    dfs(S.substr(0, 1), 0);
    cout << ans << endl;
}