#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;


int main() {
    int n;
    cin >> n;
    vec<int> a(n);
    rep(i,n) cin >> a[i];
    sort(all(a));
    int mx = a[n-1];
    int half = mx/2;
    
    int index = lower_bound(all(a),half) - a.begin();
    if(index == 0) cout << mx << " " << a[index] << endl;
    else if(index == n-1) cout << mx << " " << a[n-2] << endl;
    else {
        int a1 = a[index];
        int a2 = a[index-1];
        if(abs(half-a1) <= abs(half-a2)){
            cout << mx << " " << a1 << endl;
        } else {
            cout << mx << " " << a2 << endl;
        }
    }
}
