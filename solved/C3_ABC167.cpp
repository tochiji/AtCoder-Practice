#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
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
        rep(j,M) cin >> A[i][j];
    }
    int ans = 1e9+7;

    rep(i,1<<N){
        int tmpans = 0;
        vec<int> Xs(M,X);
        rep(j,N){
            if(!(i&1<<j)) continue;
            tmpans += C[j];
            rep(k,M) Xs[k]-=A[j][k];
        }
        bool flag = true;
        for(auto e:Xs)if(e>0) flag = false;
        if(flag)ans = min(ans,tmpans);
    }

    cout << ((ans==(int)1e9+7)?-1:ans) << endl;
}