#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int T;
    cin >> T;
    smatch smatch;
    rep(i, T) {
        int N;
        string S;
        cin >> N >> S;
        if (N <= 3) {
            cout << "X" << endl;
            continue;
        }
        bool flag = false;
        bool A    = regex_search(S, smatch, regex("ooo|oo-|o-o|-oo|-o--|--o-|o-(--)+o"));
        if (A) flag = true;
        cout << (flag ? "O" : "X") << endl;
    }
}