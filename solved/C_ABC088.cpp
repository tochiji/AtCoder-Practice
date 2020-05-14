#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int c[4][4];
bool ans = false;
void dfs(vec<int>a,vec<int>b){

    bool flag = true;
    rep(i,3)rep(j,3){
        cout << a[i] <<" " << b[j] << endl;
        if(a[i]+b[j]!=c[i][j])flag = false;
        if(a[i]+b[j]>c[i][j]) return;
        if(a[i]>c[i][j]) return;
        if(b[j]>c[i][j]) return;
    }
    if(flag) {
        ans = true;
        cout << "Yes" << endl;
        exit(0);
    }
    rep(i,3){
        ++a[i];
        dfs(a,b);
        --a[i];
    }
    rep(i,3){
        ++b[i];
        dfs(a,b);
        --b[i];
    }
}

int main() {
    rep(i,3)rep(j,3){
        cin >> c[i][j];
    }
    
    dfs(vec<int>(3,0),vec<int>(3,0));
    cout << "No" << endl;
}