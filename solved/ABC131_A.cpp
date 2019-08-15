#include <bits/stdc++.h>
#define rep(i, n) for (int(i) = 0; (i) < (n); (i)++)
using namespace std;

int main() {
  string s;
  cin >> s;
  if(s[0] == s[1] || s[1] == s[2] || s[2] == s[3]) puts("Bad");
  else puts("Good");
}