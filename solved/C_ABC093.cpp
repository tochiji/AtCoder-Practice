#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    vec<int> x(3);
    cin >> x[0] >> x[1] >> x[2];
    sort(all(x));
    int ans = 0;
    int mxdiff = x[2]-x[0];
    int mndiff = x[2]-x[1];
    ans+=mndiff;
    if((mxdiff - mndiff)%2 == 0){
        ans+=((mxdiff - mndiff)/2);
    } else {
        ans+=((mxdiff - mndiff + 1)/2)+1;
    }
    cout << ans << endl;
}
