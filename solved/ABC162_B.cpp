#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int N;
    cin >> N;
    ll ans = 0;
    for(int i = 1;i<=N;i++){
        if(i%3==0 || i%5==0) continue;
        ans+=i;
    }
    cout << ans << endl;
}
