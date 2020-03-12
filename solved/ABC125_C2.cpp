#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i,N) cin >> A[i];
    vector<int> l(N);
    vector<int> r(N);
    l[0] = A[0];
    r[N-1] = A[N-1];
    rep(i,N) l[i] = gcd(l[i-1],A[i]);
    for(int i=N-2;i>=0;i--) r[i] = gcd(r[i+1],A[i]);
    int ans = max(l[N-2],r[1]);
    for(int i=1;i<=N-2;i++){
        ans = max((ll)ans,gcd(l[i-1],r[i+1]));
    }
    cout << ans << endl;
}