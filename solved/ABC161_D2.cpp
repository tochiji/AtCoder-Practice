#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int K;
    cin >> K;
    queue<ll> q({1, 2, 3, 4, 5, 6, 7, 8, 9});
    int k = 0;
    while (1) {
        ++k;
        ll X = q.front();
        q.pop();
        if (k == K) {
            cout << X << endl;
            return 0;
        }
        ll b = X % 10;
        if (b == 0) {
            q.push(X * 10 + 0), q.push(X * 10 + 1);
        } else if (b == 9) {
            q.push(X * 10 + 8), q.push(X * 10 + 9);
        } else {
            q.push(X * 10 + b - 1), q.push(X * 10 + b), q.push(X * 10 + b + 1);
        }
    }
}
