#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using namespace std;

int main() {
    ll A;
    double B;
    cin >> A >> B;
    ll C = round(B * 100);
    cout << A * C / 100 << endl;
}
