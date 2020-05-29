#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N   = 16;
    int tmp = 0;
    while (N % 2 == 0) {
        ++tmp;
        N /= 2;
    }
    cout << tmp << endl; // 4
} 