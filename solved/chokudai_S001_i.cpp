#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;
    vec<int> a(N);
    rep(i, N) cin >> a[i];
    a.insert(a.begin(),0);
    a.push_back(0);
    rep(i,a.size()-1) a[i+1] += a[i];
    int l = 0;
    int r = 1;
    int ans = 0;
    while(l<a.size()){
        if(a[r]-a[l] == N) {
            ++ans;
            ++l;
        } else if(a[r]-a[l] > N){
            ++l;
        } else if(r == a.size()-1){
            break;
        } else {
            ++r;
        }
        
    }
    cout << ans << endl;
}
