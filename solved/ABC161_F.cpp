#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    ll N;
    cin >> N;
    int ans = 0;
    for (ll i = 2; i * i <= (N - 1); ++i) {
        if ((N - 1) % i == 0) {
            ++ans;
            if(i*i != N-1) ++ans;
        }
    }
    if (N > 2) ++ans;
    for (ll i = 2; i * i <= N; ++i) {
        ll tmp = N;
        if (N % i == 0) {
            while(tmp%i == 0) tmp /= i;
            tmp %= i;
            if(tmp == 1) ++ans;
        }
    }
    ++ans;
    cout << ans << endl;
}
