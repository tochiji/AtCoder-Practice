#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> s(M);
    vector<int> c(M);
    rep(i, M) {
        cin >> s[i] >> c[i];
        s[i]--;
    }
    if (N == 1) {
        for (int i = 0; i <= 9; i++) {
            bool flag = true;
            rep(m, M) {
                if (i != c[m]) flag = false;
            }
            if (flag) {
                cout << i << endl;
                return 0;
            }
        }
    } else if (N == 2) {
        for (int i = 10; i <= 99; i++) {
            bool flag = true;
            string is = to_string(i);
            rep(m, M) {
                if (is[s[m]] - '0' != c[m]) flag = false;
            }
            if (flag) {
                cout << i << endl;
                return 0;
            }
        }
    } else if (N == 3) {
        for (int i = 100; i <= 999; i++) {
            bool flag = true;
            string is = to_string(i);
            rep(m, M) {
                if (is[s[m]] - '0' != c[m]) flag = false;
            }
            if (flag) {
                cout << i << endl;
                return 0;
            }
        }
    }
		cout << -1 << endl;
}