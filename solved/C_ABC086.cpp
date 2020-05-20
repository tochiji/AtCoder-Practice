#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;
    int nowX = 0;
    int nowY = 0;
    int bt = 0;
    rep(i,N){
        int t,x,y;
        cin >> t >> x >> y;
        int mntime = abs(x-nowX) + abs(y-nowY);
        if(mntime==0||(t-bt)<mntime||abs(t-bt-mntime)%2==1){
            cout << "No" << endl;
            return 0;
        }
        nowX=x,nowY=y,bt = t;
    }
    cout << "Yes" << endl;
}