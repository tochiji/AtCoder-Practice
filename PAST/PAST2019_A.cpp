#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int ans = 0;
    if (S[0] - '0' <= 9 && S[0] - '0' >= 0) {
        ans += (S[0] - '0') * 100;
    } else {
        cout << "error" << endl;
        return 0;
    }

    if (S[1] - '0' <= 9 && S[1] - '0' >= 0) {
        ans += (S[1] - '0') * 10;
    } else {
        cout << "error" << endl;
        return 0;
    }

    if (S[2] - '0' <= 9 && S[2] - '0' >= 0) {
        ans += (S[2] - '0') * 1;
    } else {
        cout << "error" << endl;
        return 0;
    }

    cout << ans * 2 << endl;
}