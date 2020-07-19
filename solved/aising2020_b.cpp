#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;
    
    vec<int> a(N+1);
    rep(i, N) cin >> a[i+1];
    int ans = 0;
    for(int i=1;i<=N;i+=2){
        if(a[i]%2 == 1)++ans;
    }
    cout << ans << endl;
}
