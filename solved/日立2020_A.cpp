#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    string S;
    cin >> S;
    bool ans = true;

    if (S.size() % 2 == 1) ans = false;
    for (int i = 0; i < S.size(); i++) {
        if (i % 2 == 0 && S[i] != 'h')
            ans = false;
        else if (i % 2 == 1 && S[i] != 'i')
            ans = false;
    }
    puts(ans ? "Yes" : "No");
}