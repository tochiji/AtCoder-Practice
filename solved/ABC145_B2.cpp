#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    string S;
    cin >> N;
    cin >> S;
    if (N % 2 == 1) {
        cout << "No" << endl;
    }
    else {
        if (S.substr(0, N/2) == S.substr(N/2, N/2)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}