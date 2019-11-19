// 深さ優先探索 dfs 753 755
#include <bits/stdc++.h>
using namespace std;

int N   = 0;
int ans = 0;

void dfs(string S) {
    if (stol(S) > N) return;
    bool has3 = S.find("3") != string::npos;
    bool has5 = S.find("5") != string::npos;
    bool has7 = S.find("7") != string::npos;
    if (has3 && has5 && has7) ans++;
    dfs(S + "3");
    dfs(S + "5");
    dfs(S + "7");
}

int main() {
    cin >> N;
    dfs("0");
    cout << ans << endl;
}