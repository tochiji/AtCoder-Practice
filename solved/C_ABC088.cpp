#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int c[3][3];
    rep(i,3)rep(j,3){
        cin >> c[i][j];
    }
    int a0,a1,a2;
    a0 = min({c[0][0],c[0][1],c[0][2]});
    a1 = min({c[1][0],c[1][1],c[1][2]});
    a2 = min({c[2][0],c[2][1],c[2][2]});

    int b0,b1,b2;
    bool flag = true;
    rep(i,3){
        bool cond1 = (c[0][i] - a0) == (c[1][i] - a1);
        bool cond2 = (c[0][i] - a0) == (c[2][i] - a2);
        bool cond3 = (c[1][i] - a1) == (c[2][i] - a2);
        if(!cond1 || !cond2 || !cond3) flag = false;
    }
    if(flag){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}