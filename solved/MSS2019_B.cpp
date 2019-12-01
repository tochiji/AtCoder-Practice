#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    int X;
    X = N / 1.08;
    if (floor(X * 1.08) == N) {
        cout << X << endl;
    } else if (floor((X + 1) * 1.08) == N) {
        cout << X + 1 << endl;
    } else {
        cout << ":(" << endl;
    }
}