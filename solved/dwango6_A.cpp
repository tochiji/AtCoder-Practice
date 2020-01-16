#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> s(N);
    vector<int> t(N);
    rep(i,N){
        cin >> s[i];
        cin >> t[i];
    }
    string X;
    cin >> X;
    int ans = 0;
    bool flag = false;
    rep(i,N){
      if(flag) ans+=t[i];
      if (s[i] == X) flag = true;
    }
    cout << ans << endl;
}