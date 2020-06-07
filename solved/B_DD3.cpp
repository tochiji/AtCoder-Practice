#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    string S;
    cin >> S;
    int N = S.size();

    ll ans    = 0;
    ll nowsum = S[0] - '0';

    rep(i, 1 << (N - 1)) {
        rep(j, N - 1) {
            if (i & (1 << j)) {
                // +が来た場合、ここまでの計算を一度確定させて、
                // 次の桁から始める
                ans += nowsum;
                nowsum = S[j+1] - '0';
            } else {
                // +が来ない場合、繰り上げ
                nowsum *= 10;
                nowsum += (S[j+1] - '0');
            }
        }
        ans+=nowsum;
        nowsum = S[0] - '0';
    }

    cout << ans << endl;
}