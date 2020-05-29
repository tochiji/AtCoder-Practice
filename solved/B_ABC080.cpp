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
    int N2 = N;
    int sm = 0;
    while(N>0){
        sm+=N%10;
        N/=10;
    }
    cout << ((N2%sm==0)?"Yes":"No") << endl;
}