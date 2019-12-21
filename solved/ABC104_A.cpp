#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    if(N<1200){
      cout << "ABC" <<endl;
    } else if(N<2800){
      cout << "ARC" << endl;
    } else {
      cout << "AGC" << endl;
    }
}