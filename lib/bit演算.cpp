#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N = 10;

    int ans = 0;
    rep(i,1<<N){
        int tmpans = 0;
        rep(j,N){
            // j桁目に1が立ってなければcontinue
            if(!(i&1<<j)) continue;
            tmpans += C[j];
        }
    }
}