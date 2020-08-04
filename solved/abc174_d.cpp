#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N;
    string c;
    cin >> N >> c;

    int l=0,r=N-1;
    ll ans = 0;
    while(l<r){
        if(c[l]=='W' && c[r]=='R'){
            ++ans;
            ++l,--r;
        } else if(c[l] == 'R'){
            ++l;
        } else if(c[r]=='W'){
            --r;
        }
    }
    cout << ans << endl;
}
