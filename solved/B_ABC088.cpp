#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;
    vec<int> a(N);
    rep(i, N) cin >> a[i];
    sort(rall(a));

    int A = 0, B = 0;
    rep(i, N) {
        if (i % 2 == 0)
            A += a[i];
        else
            B += a[i];
    }
    cout << A - B << endl;
}