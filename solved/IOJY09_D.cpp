#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

int n,k;
vector<string> a; 
set<string> s;

void dfs(int b,string num){
  int count = bitset<10>(b).count();
  if(count == k){
    s.insert(num);
    return;
  }
  rep(i,n){
    if(b&(1<<i)) continue;
    dfs((b|(1<<i)),num+a[i]);
  }
}

int main() {
  cin >> n >> k;
  a.resize(n);
  rep(i,n) cin >> a[i];
  dfs(0,"");
  cout << s.size() << endl;
}