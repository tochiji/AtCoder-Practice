#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    int T;
    cin >> T;
    vector<string> S(T);
    vector<int> ans;
    rep(i, T) cin >> S[i];

    for (auto s : S) {
        int cnt   = 0;
        int index = 0;
        while (true) {
            int tokyo_i = s.substr(index).find("tokyo");
            int kyoto_i = s.substr(index).find("kyoto");

            if (tokyo_i == string::npos && kyoto_i == string::npos) {
                break;
            }
            else if (tokyo_i == string::npos && kyoto_i != string::npos) {
                index += kyoto_i + 5;
            }
            else if (tokyo_i != string::npos && kyoto_i == string::npos) {
                index += tokyo_i + 5;
            }
            else {
                int m = min(kyoto_i, tokyo_i);
                index += m + 5;
            }
            cnt += 1;
        }
        cout << cnt << endl;
    }
}