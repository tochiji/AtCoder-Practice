#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

// 1 1 1 1
// 1 1 1 1
// 1 1 1 1
// ↓
// 二重累積和
// 1 2 3 4 
// 2 4 6 8 
// 3 6 9 12 

// 高速ゼータ変換＝二重累積和
// まず縦に足していき、次に横に足していく。
// https://qiita.com/convexineq/items/afc84dfb9ee4ec4a67d5

int main() {
    vec<vec<int>> a = {
        {1,1,1,1},
        {1,1,1,1},
        {1,1,1,1}
    };
    
    int N1 = a.size(); // 3
    int N2 = a[0].size(); // 4

    rep(i,N1-1)rep(j,N2) a[i+1][j] += a[i][j];
    rep(i,N1)rep(j,N2-1) a[i][j+1] += a[i][j];
    
    
    for(auto h:a){
        for(auto e:h){
            cout << e << " ";
        }
        cout << endl;
    }
}