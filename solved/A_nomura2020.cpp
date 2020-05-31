#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int H1,M1,H2,M2,K;
    cin >> H1 >> M1 >> H2 >> M2 >> K;
    H1*=60;
    H2*=60;
    int ans = H2+M2-(H1+M1)-K;

    cout << ans << endl;
}
