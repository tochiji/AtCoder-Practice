#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int N,X,Y;
    cin >> N >> X >> Y;
    --X,--Y;
    vector<int> ans(N+1,0);
    rep(i,N)for(int j=i+1;j<N;j++){
        int d1 = j-i;
        int d2 = 10000000;
        if(i<=X&&Y<=j){
            d2 = X-i + j-Y + 1;
        } else if(X<i&&Y<=j){
            d2 = i-X + j-Y + 1;
        } else if(i<=X&&j<Y){
            d2 = X-i + Y-j + 1;
        } else if(X<i&&j<Y){
            d2 = i-X + Y-j + 1;
        }
        ++ans[min(d1,d2)];
    }
    for(int i=1;i<=N-1;i++)cout << ans[i] << endl; 
}
