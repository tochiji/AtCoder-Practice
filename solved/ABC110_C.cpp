#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;
    map<char, char> smap;
    map<char, char> tmap;

    rep(i, S.size()) {
        char s = S[i];
        char t = T[i];
        if (smap.count(s) == 0) {
            smap[s] = t;
        } else if (smap[s] != t) {
            cout << "No" << endl;
            return 0;
        }
        
        if (tmap.count(t) == 0) {
            tmap[t] = s;
        } else if (tmap[t] != s) {
            cout << "No" << endl;
            return 0;
        }
    }
    
    cout << "Yes" << endl;
}