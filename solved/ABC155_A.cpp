#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    if (A == B && A == C) {
        cout << "No" << endl;
        return 0;
    } else if (A == B || A == C || B == C) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}