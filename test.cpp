#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main(){
  // &は論理積を取る。どちらもTrue（1）なら1を返す。
  // 1&1は1、1&0は0、0&0は0。論理学でよくあるやつ。

  int i = 3;
  cout << (i&0) << endl; // 0
  cout << (i&1) << endl; // 1

  i = 4;
  cout << (i&0) << endl; // 0
  cout << (i&1) << endl; // 0

  // int型でも、setprecisionすれば小数点以下が出力される
  i = 113;
  cout << fixed << setprecision(7) << sqrt(i) << endl; // 10.6301458

  // eを入れる文字
  i = 1e9;
  cout << i << endl; // 1000000000 （0が9個）

  int a = 1000000000;
  int b = 0000000000;
  int c = a^b;
  cout << bitset<32>(c) << endl;

  // lower_boundの性質
  deque<int> d;
  d.push_back(1);
  d.push_back(2);
  d.push_back(3);
  cout << lower_bound(d.begin(),d.end(),0) - d.begin() << endl; // 0
  cout << lower_bound(d.begin(),d.end(),1) - d.begin() << endl; // 0
  cout << lower_bound(d.begin(),d.end(),2) - d.begin() << endl; // 1
  cout << lower_bound(d.begin(),d.end(),10) - d.begin() << endl; // 3


  // 文字列検索
  string s = "aaakyotobbb";
  int kyoto_i = s.substr(1).find("kyoto");
  cout << kyoto_i << endl;

  // 10^9 + 7を見る
  cout << (long long)(1e9 + 7) << endl;
  cout << 1000000007 << endl;

  // カッコに代入してさらにあまりを取れるかどうか
  int R = 2;
  (R += 3) %= 10;
  cout << R << endl; // 5
}
