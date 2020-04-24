#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int ans = 0;
    for (int i = 1; i <= N - 2; ++i) {
        int tmpans = 0;
        map<char, int> mp;
        rep(k, i) mp[S[k]] = 1;
        for (int k = i; k < N; ++k)
            if (mp[S[k]] == 1) mp[S[k]] = 2;
        for (auto e : mp)
            if (e.second == 2) ++tmpans;
        ans = max(ans, tmpans);
    }
    cout << ans << endl;
}