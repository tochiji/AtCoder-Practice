#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;
    
    vec<int> p(N);
    rep(i, N) cin >> p[i];
    int ans = 0;
    bool b = false;
    rep(i,N){
        int t = i+1;
        if(p[i] == t && b) b=false;
        else if(p[i]==t && !b) {
            ++ans;
            b = true;
        } else if(p[i] != t && b){
            b = false;
        }
    }
    cout << ans << endl;
}
