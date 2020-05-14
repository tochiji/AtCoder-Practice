#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N,M,X;
    cin >> N >> M >> X;
    vec<int> C(N);
    vec<vec<int>> A(N,vec<int>(M,0));
    rep(i,N){
        cin >> C[i];
        rep(j,M) cin >>A[i][j];
    }
    
    int ans = 1e9 + 9;
    for(int i=0;i<(int)pow(2,N);++i){
        vec<int> skill(M,X);
        int tmpyen = 0;
        rep(j,N){
            if(i&(1<<j)){
                rep(k,M) skill[k]-=A[j][k];
                tmpyen+=C[j];
            }
        }
        bool flag = true;
        for(auto e:skill){
            if(e>0)flag = false;
        }
        if(flag) ans=min(ans,tmpyen);
    }
    if(ans == (int)1e9 + 9){
        cout << -1 << endl;
    }else {
    cout << ans << endl;
    }

}
