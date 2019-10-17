#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<ll> A(N);
    bool isodd = false;
    ll mn = 1e9;
    ll sum = 0;
    rep(i,N){
      cin >> A[i];
      if(A[i]<0) isodd = !isodd;
      mn = min(abs(A[i]),mn);
      sum += abs(A[i]);
    }

    if(isodd){
      cout << sum - 2*mn << endl;
    } else {
      cout << sum << endl;
    }
}