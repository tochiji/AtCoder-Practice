#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int sN = s.size();
    int tN = t.size();

    vector<vector<int>> l(26);
    rep(i,sN){
      int al = s[i] - 'a';
      l[al].push_back(i+1);
    }

    ll ans = 0;
    int before = -1;

    rep(i,tN){
      int al = t[i] - 'a';

      if(l[al].size() == 0){
        cout << "-1" << endl;
        return 0;
      }

      if(i == 0){
        ans = l[al][0];
        before = ans;
        continue;
      }

      int index = lower_bound(all(l[al]),before+1) - l[al].begin();

      if(index >= l[al].size()){
        ans += sN - before + l[al][0];
        before = l[al][0];
      } else {
        ans += l[al][index] - before;
        before = l[al][index];
      }
    }

    cout << ans << endl;
}