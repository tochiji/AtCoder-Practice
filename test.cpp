#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main(){
  // &は論理積を取る。どちらもTrue（1）なら1を返す。
  // 1&1は1、1&0は0、0&0は0。論理学でよくあるやつ。

  int i = 3;
  cout << (i&0) << endl; // 0
  cout << (i&1) << endl; // 1 奇数だと1

  i = 4;
  cout << (i&0) << endl; // 0
  cout << (i&1) << endl; // 0　偶数だと0

  // int型でも、setprecisionすれば小数点以下が出力される
  i = 113;
  cout << fixed << setprecision(7) << sqrt(i) << endl; // 10.6301458

  // eを入れる文字
  i = 1e9;
  cout << i << endl; // 1000000000 （0が9個）

  // XORの確認。どちらか片方だけ1なら1。どこが異なっているかを確認
  int a = 1000000000;
  int b = 0;
  int c = a^b;
  cout << bitset<32>(a) << endl; // 00111011100110101100101000000000
  cout << bitset<32>(b) << endl; // 00000000000000000000000000000000
  cout << bitset<32>(c) << endl; // 00111011100110101100101000000000
  cout << c << endl; // 1000000000

  // lower_boundの性質
  deque<int> d;
  d.push_back(1);
  d.push_back(2);
  d.push_back(3);
  cout << lower_bound(d.begin(),d.end(),0) - d.begin() << endl; // 0
  cout << lower_bound(d.begin(),d.end(),1) - d.begin() << endl; // 0
  cout << lower_bound(d.begin(),d.end(),2) - d.begin() << endl; // 1
  cout << lower_bound(d.begin(),d.end(),10) - d.begin() << endl; // 3

  // lower_boundの性質
  cout << endl;
  cout << "lower_bound" << endl;
  vector<int> p(4);
  p[0] = -1;
  p[1] = 999;
  p[2] = 999;
  p[3] = 999;

  cout << lower_bound(p.begin(),p.end(),-2) - p.begin() << endl;
  // 0 初項より小さければ0
  cout << lower_bound(p.begin(),p.end(),-1) - p.begin() << endl;
  // 0 ある項と同じならそのindex
  cout << lower_bound(p.begin(),p.end(),0) - p.begin() << endl;
  // 1 ある項より大きければその次のindex
  cout << lower_bound(p.begin(),p.end(),999) - p.begin() << endl;
  // 1 連続する数値のときは連続する一番はじめのindex
  cout << lower_bound(p.begin(),p.end(),1000) - p.begin() << endl;
  // 4 一番右より大きい場合は、配列の最後
  cout << endl;

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

  // 掛け算とわり算の順序の違い
  // 割り算は桁落ちが発生するから注意。かけてから最後に割ること
  cout << 10 * 10 / 3 << endl; // 33
  cout << 10 / 3 * 10 << endl; // 30

  // 大きい掛け算。下記のような形は大丈夫
  cout << (long long)1000000000 * 1000000000 / 1000000000 + 1 << endl;
  cout << ((long long)1000000000 * 1000000000 / 1000000000) + 2 << endl;
  cout << (1000000000 * (long long)1000000000 / 1000000000) + 3 << endl;
  cout << (1000000000LL * 1000000000 / 1000000000) + 4 << endl;
  cout << (1000000000 * 1000000000LL / 1000000000) + 5 << endl;

  // こっから下はだめ。intオーバーフローする。
  // カッコ
  cout << (long long)(1000000000 * 1000000000 / 1000000000) + 10 << endl;
  cout << (1000000000 * 1000000000 / 1000000000) + (long long)11 << endl;
  cout << (1000000000 * 1000000000 / (long long)1000000000) + 12 << endl;
}
