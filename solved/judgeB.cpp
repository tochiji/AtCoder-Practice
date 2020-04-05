#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int N;
    cin >> N;
    priority_queue<int, std::vector<int>, std::greater<int>> R;
    priority_queue<int, std::vector<int>, std::greater<int>> B;
    rep(i, N) {
        int X;
        char C;
        cin >> X >> C;
        if (C == 'R')
            R.push(X);
        else
            B.push(X);
    }
    while (!R.empty()) {
        cout << R.top() << endl;
        R.pop();
    }
    while (!B.empty()) {
        cout << B.top() << endl;
        B.pop();
    }
}