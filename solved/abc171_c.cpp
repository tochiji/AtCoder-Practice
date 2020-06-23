#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    ll N;
    cin >> N;
    string ans = "";

    string al = "zabcdefghijklmnopqrstuvwxyz";
    while (N > 0) {
        char c = al[N % 26];
        ans    = c + ans;
        if (N % 26 == 0) {
            N -= 26;
        } else {
            N -= (N % 26);
        }

        N /= 26;
    }
    cout << ans << endl;
}
