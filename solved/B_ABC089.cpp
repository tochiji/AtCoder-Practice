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
    vec<int> S(N);
    string ans = "Three";
    rep(i, N) {
        string s;
        cin >> s;
        if(s=="Y") ans = "Four";
    }
    cout << ans << endl;
}