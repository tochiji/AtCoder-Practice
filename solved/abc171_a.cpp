#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    string a;
    cin >> a;
    bool big = regex_match(a, regex("[A-Z]"));
    cout << (big?"A":"a") << endl; // Yes
}
