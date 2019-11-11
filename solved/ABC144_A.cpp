#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    if (A >= 10 || B >= 10) {
        cout << -1 << endl;
    }
    else {
        cout << A * B << endl;
    }
}