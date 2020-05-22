#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    string S;
    cin >> S;
    int N = S.size();

    int ans = 0;
    int before = 0;
    for(auto e:S){
        if(e == 'A'||e=='T'||e=='C'||e=='G'){
            ++before;
            ans = max(ans,before);
        } else {
            before = 0;
        }
    }
    ans = max(ans,before);
    cout << ans << endl;
    
}