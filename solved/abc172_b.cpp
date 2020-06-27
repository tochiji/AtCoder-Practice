#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    string S;
    string T;
    cin >> S >> T;
    int ans = 0;
    for(int i=0;i<S.size(); i++){
        if(S[i] != T[i]) ++ans;
    }
    cout << ans << endl;
}
