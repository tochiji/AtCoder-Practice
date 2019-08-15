#include <bits/stdc++.h>
using namespace std;

const int MAX_N=20;
int n,k;
vector<int> a(MAX_N);

bool dfs(int i, int sum){
  if(i == n) return sum == k;
  if(dfs(i+1,sum)) return true;
  if(dfs(i+1,sum + a[i])) return true;
  return false;
}

int main(){
  cin >> n >> k;
  for(int i=0;i<n;i++) cin >> a[i];

  cout << (dfs(0,0) ? "Yes" : "No") << endl;
}