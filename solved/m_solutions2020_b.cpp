#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int A, B, C, K;
    cin >> A >> B >> C >> K;
    rep(_,K) {
        if (B <= A) B *= 2;
        else if (C <= B)
            C *= 2;
    }
    if (B > A && C > B) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
