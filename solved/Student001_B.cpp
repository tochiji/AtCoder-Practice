#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;
ll mod = 1e9 + 7;

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> A(N);
    rep(i, N) cin >> A[i];

    ll one = 0;
    rep(i,N-1)for(int j=i+1;j<N;j++){
        if(A[i]>A[j]) one += 1;
    }

    ll two = 0;
    rep(i,N)rep(j,N){
        if(A[i]>A[j]) two += 1;
    }

    ll between = two % mod;
    ll nC2 = (K * (K - 1))/2 % mod;
    ll ans = ((one * K) % mod + (between * nC2) % mod) % mod;
    cout << ans << endl;
}
