#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

ll K;
vec<ll> ans;

void dfs(string l) {
    if(l.size()>=11) return;
    if (l != "") ans.push_back(stol(l));
    
    int b = l.back() - '0';
    if (b != 0) dfs(l + to_string(b - 1));
    dfs(l + to_string(b));
    if (b != 9) dfs(l + to_string(b + 1));
}

int main() {
    cin >> K;
    for (int i = 1; i <= 9; ++i) {
        dfs(to_string(i));
    }
    sort(all(ans));
    cout << ans[K-1] << endl;
}