#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    string N;
    cin >> N;
    ll now = 0;
    for(auto e: N){
        now+=(e-'0');
    }
    cout << (now%9==0?"Yes":"No") << '\n';
}
