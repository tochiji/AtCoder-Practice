#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    string s;
    cin >> s;

    double center = (double)s.size()/2;
    int ans = 0;
    int left = 0;
    int right = s.size() -1;

    while(true){
        int lnx = s.find_first_of("abcdefghijklmnopqrstuvwyz");
        int rnx = s.find_last_of("abcdefghijklmnopqrstuvwyz");
        if (lnx == string::npos) {
            cout << ans << endl;
            return 0;
        }
        if(lnx == rnx){
          ans += abs(lnx - ((int)s.size() - rnx - 1));
          cout << ans << endl;
          return 0;
        }
        if((lnx != rnx) && s[lnx] == s[rnx]){
            ans += abs(lnx - ((int)s.size() - rnx -1));
            s = s.substr(lnx+1,rnx-(lnx+1));
            continue;
        }
        cout << -1 << endl;
        return 0;
    }
}