#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;
    vec<int> d(N);
    rep(i, N) cin >> d[i];
    sort(all(d));
    int ans = 0;
    rep(i,N){
        if(i==0)++ans;
        else {
            if(d[i] != d[i-1]) ++ans;
        }
    }
    cout << ans << endl;
}