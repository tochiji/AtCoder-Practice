#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

struct BIT {
    int n;
    vector<ll> d;
    BIT(int n = 0) : n(n), d(n + 1) {
    }
    void add(int i, ll x = 1) {
        for (i++; i <= n; i += i & -i)
            d[i] += x;
    }
    int sum(int i) {
        ll x = 0;
        for (i++; i; i -= i & -i)
            x += d[i];
        return x;
    }
};

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    rep(i, N) cin >> A[i];
    rep(i, N) cin >> B[i];

    // シャッフル番号
    vector<int> v(N);
    iota(v.begin(), v.end(), 0);

    int ans = 1e9;

    do {
        bool visOK = true;
        for (int i = 1; i < N; i++) {
            // v[i]はシャッフルされる前のカード番号
            // i はシャッフルされた後のカード番号
            bool isXomote = abs(v[i - 1] - (i - 1)) % 2 == 0;
            bool isYomote = abs(v[i] - i) % 2 == 0;
            int X         = isXomote ? A[v[i - 1]] : B[v[i - 1]];
            int Y         = isYomote ? A[v[i]] : B[v[i]];
            if (Y - X >= 0) {
                continue;
            } else {
                visOK = false;
            }
            
        }

        if (visOK) {
            int count = 0;
            BIT b(N);
            rep(i, N) {
                count += i - b.sum(v[i]);
                b.add(v[i], 1);
            }
            ans = min(ans, count);
        }
    } while (next_permutation(v.begin(), v.end()));

    if (ans == 1e9)
        cout << -1 << endl;
    else
        cout << ans << endl;
}