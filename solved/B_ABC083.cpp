#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N,A,B;
    cin >> N >> A >> B;
    int ans = 0;
    for(int i=1;i<=N;++i){
        int now = i;
        int sm = 0;
        while(now){
            sm += now%10;
            now /=10;
        }
        if(sm>=A&&B>=sm) ans+=i;
    }
    cout << ans << endl;
}