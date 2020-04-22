#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int X;
    cin >> X;
    int ans = 1;
    for(int i = 2;i*i<=X;++i){
        int tmpans = i;
        while(1){
            if(tmpans*i<=X){
                tmpans *= i;
            } else {
                break;
            }
        }
        ans = max(ans,tmpans);
    }
    cout << ans << endl;
}