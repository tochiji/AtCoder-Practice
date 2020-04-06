#include <bits/stdc++.h>
using namespace std;

int a1, a2, a3, ans;

void dfs(int a, int b, int c) {
    if (a < b || b < c || a < c) return;
    if (a > a1 || b > a2 || c > a3) return;
    if (a + b + c == a1 + a2 + a3) {
        ++ans;
        return;
    }
    dfs(a + 1, b, c);
    dfs(a, b + 1, c);
    dfs(a, b, c + 1);
}

int main() {
    cin >> a1 >> a2 >> a3;
    dfs(0, 0, 0);
    cout << ans << endl;
}