#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int main() {
    int N,Q;
    cin >> N >> Q;
    vector<ll> A(N);
    vector<ll> S(Q);
    rep(i,N) cin >> A[i];
    rep(i,Q) cin >> S[i];
    vector<pair<ll,int>> g(1);
    g[0] = {A[0],0};
    for(int i=1;i<N;++i){
        int gg = gcd(g[g.size()-1].first,A[i]);
        if(g[g.size()-1].first!=gg) g.push_back({gg,i});
    }
    rep(i,Q){
        bool flag = false;
        for(auto [f,s]:g) {
            if(gcd(f,S[i])==1){
                cout << s+1 << endl;
                flag = true;
                break;
            }
        }
        if(!flag) cout << gcd(g[g.size()-1].first,S[i]) << endl;
    }
}