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

    vec<int> LIS;
    rep(i,N){
        if(LIS.size() == 0){
            LIS.push_back(a[i]);
        } else {
            auto itr = lower_bound(all(LIS),a[i]);
            if(itr== LIS.end()){
                LIS.push_back(a[i]);
            } else {
                LIS[itr - LIS.begin()] = a[i];
            }
        }
    }
    cout << LIS.size() << endl;
}
