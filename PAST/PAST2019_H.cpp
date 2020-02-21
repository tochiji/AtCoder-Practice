#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<ll> C(N);
    ll kmn   = 1000000000;
    ll allmn = 1000000000;
    rep(i, N) {
        cin >> C[i];
        allmn = min(allmn, C[i]);
        if (i % 2 == 0) kmn = min(kmn, C[i]);
    }
    int Q;
    cin >> Q;

    ll ans     = 0;
    ll sellAll = 0;
    ll sellOdd = 0;

    rep(_, Q) {
        int q;
        cin >> q;
        if (q == 1) {
            int x, a;
            cin >> x >> a;
            x--;
            if (x % 2 == 0) {
                ll capacity = C[x] - sellAll - sellOdd;
                if (capacity >= a) {
                    C[x] -= a;
                    ans += a;
                    allmn = min(allmn, C[x] - sellAll - sellOdd);
                    kmn   = min(kmn, C[x] - sellAll - sellOdd);
                }
            } else {
                ll capacity = C[x] - sellAll;
                if (capacity >= a) {
                    C[x] -= a;
                    ans += a;
                    allmn = min(allmn, C[x] - sellAll);
                }
            }
        } else if (q == 2) {
            int a;
            cin >> a;
            if (kmn >= a) {
                sellOdd += a;
                ans += (a * ((N+1)/2));
                kmn -= a;
                allmn = min(allmn, kmn);
            }
        } else {
            int a;
            cin >> a;
            if (allmn >= a) {
                sellAll += a;
                ans += a*N;
                allmn -= a;
                kmn -= a;
            }
        }
    }
    
    cout << ans << endl;
}