#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int ans = 0;

void dfs(ll now, ll MX) {
    if (now > MX) return;
    string S  = to_string(now);
    bool has3 = S.find("3") != string::npos;
    bool has5 = S.find("5") != string::npos;
    bool has7 = S.find("7") != string::npos;
    if (has3 && has5 && has7) ans++;
    dfs(now * 10 + 3, MX);
    dfs(now * 10 + 5, MX);
    dfs(now * 10 + 7, MX);
}

int main() {
    ll N;
    cin >> N;
    dfs(0, N);
    cout << ans << endl;
}