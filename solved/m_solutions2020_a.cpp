#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int X;
    cin >> X;
    if (X >= 1800) {
        cout << 1 << endl;
    } else if (X >= 1600) {
        cout << 2 << endl;
    } else if (X >= 1400) {
        cout << 3 << endl;
    } else if (X >= 1200) {
        cout << 4 << endl;
    } else if (X >= 1000) {
        cout << 5 << endl;
    } else if (X >= 800) {
        cout << 6 << endl;
    } else if (X >= 600) {
        cout << 7 << endl;
    } else if (X >= 400) {
        cout << 8 << endl;
    }
}
