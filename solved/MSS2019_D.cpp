#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int ans = 0;

    rep(i, 1000) {
        int s3 = i % 10;
        int s2 = (i / 10) % 10;
        int s1 = (i / 100) % 10 ;

        bool f1 = false;
        bool f2 = false;
        bool f3 = false;
        rep(k, N) {
            int s = S[k] - '0';
            if (!f1 && s == s1) {
                f1 = true;
            } else if (f1 && !f2 && s == s2) {
                f2 = true;
            } else if (f1 && f2 && !f3 && s == s3) {
                f3 = 1;
            }
        }
        if (f1 && f2 && f3) ans++;
    }
    cout << ans << endl;
}