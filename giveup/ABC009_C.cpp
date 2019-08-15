#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using namespace std;

int main() {
    int N, K;
    string S;
    cin >> N >> K;
    cin >> S;
    string SS = S;
    sort(all(SS));

    string ans = "";

    rep(i, N) {
        for (int j = 0; j < SS.size(); j++) {
            if (S[i] == SS[j]) {
                ans += SS[j];
                SS.erase(SS.begin() + j);
                break;
            }
            else {
                string tmpSS = SS;
                tmpSS.erase(tmpSS.begin() + j);
                string tmpS = S.substr(i + 1);

                set<char> uniqSS;
                for (auto e : tmpSS)
                    uniqSS.insert(e);

                int cnt = 0;
                for (auto e : uniqSS) {
                    int s  = count(all(tmpS), e);
                    int ss = count(all(tmpSS), e);
                    cnt += abs(s - ss);
                }
                if (cnt + 1 <= K) {
                    ans += SS[j];
                    SS.erase(SS.begin() + j);
                    K -= 1;
                    break;
                }
            }
        }
    }
    cout << ans << endl;
}