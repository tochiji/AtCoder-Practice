#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<ll> A(N);
    rep(i,N) cin >> A[i];
    vector<vector<ll>> c(3,vector<ll>(N+1));
    c[0][0] = 0;
    c[1][0] = 0;
    c[2][0] = 0;
    ll ans = 1;

    rep(i,N){
        int id = -1;
        int count = 0;
        if(c[2][i] == A[i]){
            count++;id=2;
        }
        if(c[1][i] == A[i]){
            count++;id=1;
        }
        if(c[0][i] == A[i]){
            count++;id=0;
        }
        if(id==-1){
            cout << 0 << endl;
            return 0;
        }
        c[2][i+1] = c[2][i];
        c[1][i+1] = c[1][i];
        c[0][i+1] = c[0][i];
        c[id][i+1]=A[i]+1;
        ans = (ans * count) % ((ll)1e9+7);
    }
    cout << ans << endl;

    int X = 1 << 30;
    ll Y = 1 << 30;

    cout << X << endl;
    cout << Y << endl;
}
