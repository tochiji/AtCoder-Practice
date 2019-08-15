// 深さ優先探索 dfs
#include <bits/stdc++.h>
using namespace std;

void dfs(int N, string p){
  if(p.length() == N){
    cout << p << endl;
  } else {
    dfs(N,p+"a");
    dfs(N,p+"b");
    dfs(N,p+"c");
  }
}

int main(){
  int N;
  cin >> N;
  dfs(N, "");
}