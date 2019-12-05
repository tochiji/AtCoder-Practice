#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    if (B % A == 0) {
        cout << A + B << endl;
    } else {
        cout << B-A << endl;
    }
}