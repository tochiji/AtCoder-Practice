#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N,K;
    cin >> N >> K;
    int now = 1;
    rep(i,N){
        if(now <= K) now*=2;
        else now+=K;
    }
    cout << now << endl;
}