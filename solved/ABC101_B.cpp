#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    int n = N;
    int S = 0;
    int ans = 0;
    while(n>0){
      S += (n%10);
      n/=10;
    }
    cout << (N%S==0 ? "Yes" : "No") << endl;
}