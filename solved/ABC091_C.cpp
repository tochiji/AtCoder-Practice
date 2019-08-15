#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

struct p {
    int a;
    int b;
    bool isPaird = false;

    bool operator<(const p &another) const {
        if (a == another.a)
            return b < another.b;
        else
            return a < another.a;
    };
};

int main() {
    int N;
    cin >> N;
    vector<p> A(N);
    vector<p> B(N);
    rep(i, N) cin >> A[i].a >> A[i].b;
    rep(i, N) cin >> B[i].a >> B[i].b;
    sort(all(B));

    int ans = 0;
    rep(i, N) {
        int ymax  = -1;
        int ymaxi = -1;
        rep(j, N) {
            if (A[j].isPaird) continue;
            if (A[j].a < B[i].a && A[j].b < B[i].b) {
                if (A[j].b > ymax) {
                    ymax  = A[j].b;
                    ymaxi = j;
                }
            }
        }
        if (ymax >= 0) {
            B[i].isPaird     = true;
            A[ymaxi].isPaird = true;
            ans++;
        }
    }
    cout << ans << endl;
}