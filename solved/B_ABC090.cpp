#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

bool f(string s) {
    string rs = s;
    reverse(all(rs));
    return s == rs;
}

int main() {
    int A,B;
    cin >> A >> B;
    int ans = 0;
    for(int i=A;i<=B;++i){
        string s = to_string(i);
        if(f(s)) ++ans;
    }

    cout << ans << endl;
}