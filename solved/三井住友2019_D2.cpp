#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int ans = 0;
    rep(a, 10) rep(b, 10) rep(c, 10) {
        bool A = false, B = false, C = false;
        rep(i, N) {
            if (!A && S[i] - '0' == a)
                A = true;
            else if (A && !B && S[i] - '0' == b)
                B = true;
            else if (B && S[i] - '0' == c)
                C = true;
        }

        if (C) ans++;
    }
    cout << ans << endl;
}