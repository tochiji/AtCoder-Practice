#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N,Y;
    cin >> N >> Y;
    
    rep(i,N+1)rep(j,N+1){
        if(i+j>N) break;
        int k1000 = Y-(10000*i+5000*j);
        if(k1000%1000 != 0) continue;
        int k = k1000/1000;
        if(i+j+k == N){
            printf("%d %d %d\n",i,j,k);
            return 0;
        }
    }
    printf("-1 -1 -1\n");
}