#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N,Q;
    cin >> N >> Q;
    string S;
    cin >> S;
    vec<int> s(N,0);
    for(int i=1;i<N;++i){
        if(S[i-1]=='A'&&S[i]=='C'){
            s[i] = s[i-1]+1;
        } else {
            s[i] = s[i-1];
        }
    }
    
    rep(i,Q){
        int l,r;
        cin >> l >> r;
        --l,--r;
        cout << (s[r]-s[l]) << endl;
    }
    
}