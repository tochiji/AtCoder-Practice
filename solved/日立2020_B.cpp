#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int A, B, M;
    cin >> A >> B >> M;
    vector<int> a(A);
    vector<int> b(B);
    int minA = 1e6;
    int minB = 1e6;
    int minSum = 1e7;
    rep(i, A) {
        cin >> a[i];
        minA = min(minA, a[i]);
    }
    rep(i, B) {
        cin >> b[i];
        minB = min(minB, b[i]);
    }
    minSum = minA + minB;
    vector<int> x(M);
    vector<int> y(M);
    vector<int> c(M);
    rep(i, M) {
        int x,y,c;
        cin >> x >> y >> c;
        --x;--y;
        minSum = min(minSum,a[x]+b[y]-c);
    }

    cout << minSum << endl;
}