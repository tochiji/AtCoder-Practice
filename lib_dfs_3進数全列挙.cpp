#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int N = 10;

void dfs(string now) {
    if (now.size() == N) {
        cout << now << endl;
        return;
    }
    dfs(now+"0");
    dfs(now+"1");
    dfs(now+"2");
}

int main() {
    dfs("");
}