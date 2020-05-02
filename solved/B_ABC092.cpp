#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N,D,X;
    cin >> N >> D >> X;
    vec<int> A(N);
    rep(i,N) cin >> A[i];
    int ans = 0;
    rep(i,N){
        ++ans;
        ans+=(D-1)/A[i];
    }
    cout << ans+X << endl;
}
