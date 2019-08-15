#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;
    if (S.size() < T.size()) {
        cout << "UNRESTORABLE" << endl;
        return 0;
    }
    vector<string> ans;

    for (int s = 0; s < S.size() - T.size() + 1; s++) {
        for (int t = 0; t < T.size(); t++) {
            bool isHatena = S[s + t] == '?';
            bool SequalT  = S[s + t] == T[t];
            if (t == T.size() - 1 && (isHatena || SequalT)) {
                string a = S.substr(0, s) + T + S.substr(s + T.size());
                replace(a.begin(), a.end(), '?', 'a');
                ans.push_back(a);
            }
            if (isHatena || SequalT)
                continue;
            else
                break;
        }
    }
    if (ans.size() == 0) {
        cout << "UNRESTORABLE" << endl;
    }
    else {
        sort(all(ans));
        cout << ans[0] << endl;
    }
}