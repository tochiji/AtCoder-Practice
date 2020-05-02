#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    ll X;
    cin >> X;

    ll now   = 100;
    int year = 0;

    while (now < X) {
        now = now * 1.01;
        ++year;
    }
    cout << year << endl;
}
