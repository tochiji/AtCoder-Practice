
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    string S;
    cin >> S;
    int len = 0;
    int ans = 0;
    rep(i, S.size()) {
        bool isA = (S[i] == 'A');
        bool isT = (S[i] == 'T');
        bool isC = (S[i] == 'C');
        bool isG = (S[i] == 'G');
        if (isA || isT || isC || isG) {
            len++;
        } else {
            len = 0;
            ans = max(ans, len);
        }
        ans = max(ans, len);
    }
    cout << ans << endl;
}