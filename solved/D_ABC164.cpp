#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    string S;
    cin >> S;
    int N = S.size();
    vec<int> dp0(2019, 0);
    // vec<int> dp1(2019, 0);

    dp0[0] = 1;
    ll ans = 0;
    for (int i = 1; i <= N; ++i) {
        vec<int> dp1(2019, 0);
        int s = S[i - 1] - '0';
        dp1[s] += 1;
        rep(j, 2019) {
            if (dp0[j] >= 1 && (i - 1 != 0)) {
                dp1[(j * 10 + s) % 2019] += dp0[j];
            }
        }
                
        ans += dp1[0];
        copy(all(dp1), dp0.begin());

    }
    cout << ans << endl;
}
