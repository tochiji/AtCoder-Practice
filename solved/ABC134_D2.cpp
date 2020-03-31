#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N+1);
    vector<int> f(N+1,0);
    for(int i=1;i<=N;++i) cin >> a[i];
    int ans = 0;
    for(int i=N;i>=1;--i){
        int cnt = 0;
        for(int j=i*2;j<=N;j+=i){
            cnt += f[j];
        }
        if(cnt%2 != a[i]) {
            ++f[i];
            ++ans;
        }
    }
    cout << ans << endl;
    rep(i,N) {
        if(f[i+1]) cout << i+1 << " ";
    }
    if(ans >= 1)cout << endl;
}