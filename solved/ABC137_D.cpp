#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    vector<vector<int>> jobs(m+1);

    rep(i,n){
      int a,b;
      cin >> a >> b;
      if(a > m) continue;
      jobs[m-a].push_back(b);
    }

    priority_queue<int> q;
    ll ans;
    for(int i = m-1;i>=0;i--){
      for(int b:jobs[i]){
        q.push(b);
      }
      if(!q.empty()){
        ans += q.top();
        q.pop();
      }
    }
    cout << ans << endl;
}