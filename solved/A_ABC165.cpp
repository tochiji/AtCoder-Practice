#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int K, A, B;
    cin >> K >> A >> B;
    for (int i = A; i <= B; ++i) {
        if (i % K == 0) {
            cout << "OK" << endl;
            return 0;
        }
    }
    cout << "NG" << endl;
}
