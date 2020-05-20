#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

vec<int> ans(1000000,-1);

int main() {
    int N,M;
    cin >> N >> M;
    vec<vec<int>> G(N,vec<int>());
    rep(i,M){
        int A,B;
        cin >> A >> B;
        --A,--B;
        G[A].push_back(B);
        G[B].push_back(A);
    }
    queue<pair<int,int>> q;
    q.push({0,0});
    while(!q.empty()){
        int now = q.front().first;
        int par = q.front().second;
        q.pop();
        if(ans[now] != -1) continue;
        ans[now] = par+1;
        for(auto e:G[now]){
            q.push({e,now});
        }
    }


    cout << "Yes" << endl;
    for(int i=1;i<N;++i){
        cout << ans[i] << endl;
    }
}
