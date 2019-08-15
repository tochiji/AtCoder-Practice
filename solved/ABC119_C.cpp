// 深さ優先探索 dfs 竹
#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 8;
int N,A,B,C;
vector<int> l(MAX_N);

int dfs(int Ts, int a, int b, int c){
  if(Ts == N){
    if(a == 0 || b == 0 || c == 0) return 99999999;
    return abs(a - A) + abs(b - B) + abs(c - C) - 30;
  } else {
    // Cost計算
    int notUse = dfs(Ts +1,a,b,c);
    int useForA = dfs(Ts +1,a+l[Ts],b,c) + 10;
    int useForB = dfs(Ts +1,a,b+l[Ts],c) + 10;
    int useForC = dfs(Ts +1,a,b,c+l[Ts]) + 10;
    return min({notUse,useForA,useForB,useForC});
  }
}

int main(){
  cin >> N >> A >> B >> C;
  for(int i=0;i<N;i++) cin >> l[i];
  cout << dfs(0,0,0,0) << endl;;
}