#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;

    ll ans = 0;
    for (ll i = 1; i <= N; ++i) {
        ll g = (N/i)*(N/i+1)/2;
        ans+=i*g;
    }
    cout << ans << endl;
}
