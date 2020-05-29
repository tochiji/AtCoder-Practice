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
    int ans = 100000000;
    rep(i, N) {
        int A;
        cin >> A;
        int tmp = 0;
        while(A%2==0){
            if(ans <= tmp) break;
            ++tmp;
            A/=2;
        }
        ans = min(ans,tmp);
    }
    cout << ans << endl;
}