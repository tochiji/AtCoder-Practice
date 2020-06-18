#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    string s, t;
    cin >> s >> t;

    function<string(string)> toUpper = [](string s) {
        string S = s;
        for (auto &e : S)
            e = toupper(e);
        return S;
    };

    function<string(string)> toLower = [](string s) {
        string S = s;
        for (auto &e : S)
            e = tolower(e);
        return S;
    };

    if (s == t) {
        cout << "same" << endl;
    } else if (toLower(s) == toLower(t)) {
        cout << "case-insensitive" << endl;
    } else {
        cout << "different" << endl;
    }
}