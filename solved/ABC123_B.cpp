#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    vector<int> N(5);
    int ans = 0;
    int del = 0;
    rep(i, 5) {
        int tmp;
        cin >> tmp;
        if (tmp % 10 != 0) {
          int hasu = 10-(tmp % 10);
            ans += (tmp + hasu);
            del = max(del,hasu);
        } else {
            ans += tmp;
        }
    }
    cout << ans - del << endl;
}