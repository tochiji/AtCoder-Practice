// 深さ優先探索 dfs 753 755
#include <bits/stdc++.h>
using namespace std;

int N;
int ans = 0;

void dfs(string s){
  if(s!= "" && stol(s) > N){
    return;
  } else {

    if(s.find("3") != string::npos
    && s.find("5") != string::npos
    && s.find("7") != string::npos){
      ans += 1;
    }
      dfs(s+"3");
      dfs(s+"5");
      dfs(s+"7");
  }
}

int main(){
  cin >> N;
  dfs("");
  cout << ans << endl;;
}