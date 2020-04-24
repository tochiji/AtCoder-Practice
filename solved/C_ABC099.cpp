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
    vec<int> dp(N + 1, 1e9);
    vec<int> s = {1};

    int six = 1;
    int nin = 1;
    while (six * 6 <= N) {
        six *= 6;
        s.push_back(six);
    }
    while (nin * 9 <= N) {
        nin *= 9;
        s.push_back(nin);
    }
    sort(all(s));
    dp[0] = 0;
    for(auto e:s)for(int i=0;i<=N;++i){
        if(i+e>N) break;
        dp[i+e] = min(dp[i+e],dp[i]+1);
    }
    cout << dp[N] << endl;
}
