#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;
    
    vec<int> A(N);
    rep(i, N) cin >> A[i];
    vec<int> B(N);
    rep(i, N) cin >> B[i];
    vec<int> C(N);
    rep(i, N) cin >> C[i];
    sort(all(A));
    sort(all(B));
    sort(all(C));

    ll ans = 0;
    rep(i,N){
        int b = B[i];
        ll countA,countC;
        countA = lower_bound(all(A),b) - A.begin();
        countC = N - (upper_bound(all(C),b) - C.begin());
        ans+=countA*countC;
    }
    cout << ans << endl;
}
