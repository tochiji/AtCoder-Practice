#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N,K;
    cin >> N >> K;
    vec<bool> s(N,false);
    rep(i,K){
        int d;
        cin >> d;
        rep(i2,d){
            int a;
            cin >> a;
            --a; 
            s[a] = true;
        }
    }
    int ans = 0;
    rep(i,N){
        if(!s[i]) ++ ans;
    }
    cout << ans << endl;
}
