#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

bool f(string s) {
    string rs = s;
    reverse(all(rs));
    return s == rs;
}

int main() {
    string S;
    cin >> S;
    bool ans  = true;
    string s2 = S.substr(0, (S.size() - 1) / 2);
    string s3 = S.substr(((S.size() + 3) / 2) - 1);
    cout << (f(S) && f(s2) && f(s3) ? "Yes" : "No") << endl;
}