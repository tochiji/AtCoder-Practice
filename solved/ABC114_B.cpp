#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    string S;
    cin >> S;
    int ans = 999;
    repi(i,S.size()-3){
        int x = stoi(S.substr(i,3));
        ans = min(ans, abs(753-x));
    }
    cout << ans << endl;
}