#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N,K;
    cin >> N >> K;
    string S;
    cin >> S;
    int ans = 0;
    rep(i,N-1){
      if(S[i] == S[i+1]) ans++;
    }
    ans += 2*K;
    cout << min(ans,N-1) << endl;
}