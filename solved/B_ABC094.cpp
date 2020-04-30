#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N,M,X;
    cin >> N >> M >> X;
    int up = 0;
    int dw = 0;
    rep(i, M) {
        int a;cin >> a;
        if(a<=X) ++dw;
        else ++up;
    }
    cout << min(up,dw) << endl;   
}
