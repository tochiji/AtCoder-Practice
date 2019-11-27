#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    ll N,A,B,C,D,E;
    cin >> N >> A >> B >> C >> D >> E;
    ll mn = min({A,B,C,D,E});
    ll neck = (N + (mn-1)) / mn;
    cout << neck +4 << endl;
}