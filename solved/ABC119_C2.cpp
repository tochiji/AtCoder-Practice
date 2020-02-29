#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int ans = 1e9 + 7;
int N, A, B, C;
vector<int> l;

void dfs(int a, int b, int c, int ac, int bc, int cc, int nc) {
    int index = ac + bc + cc + nc;
    if (index == N) {
      if(ac*bc*cc == 0) return;
      int tmpans = 0;
      tmpans += 10 * (ac - 1);
      tmpans += 10 * (bc - 1);
      tmpans += 10 * (cc - 1);
      tmpans += abs(A - a);
      tmpans += abs(B - b);
      tmpans += abs(C - c);
      ans = min(ans,tmpans);
    } else {
        dfs(a + l[index], b, c, ac + 1, bc, cc, nc);
        dfs(a, b + l[index], c, ac, bc + 1, cc, nc);
        dfs(a, b, c + l[index], ac, bc, cc + 1, nc);
        dfs(a, b, c, ac, bc, cc, nc + 1);
    }
}

int main() {
    cin >> N >> A >> B >> C;
    l.resize(N);
    rep(i, N) cin >> l[i];
    dfs(0, 0, 0, 0, 0, 0, 0);
    cout << ans << endl;
}