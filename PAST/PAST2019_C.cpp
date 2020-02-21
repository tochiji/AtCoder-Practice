#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    vector<int> a(6);
    rep(i, 6) cin >> a[i];
    sort(all(a));
    cout << a[3] << endl;
}