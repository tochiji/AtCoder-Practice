#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    char a, b;
    cin >> a >> b;
    bool c = (a=='H'&&b=='H')||(a=='D'&&b=='D');
        cout << (c?"H":"D") << '\n';
}
