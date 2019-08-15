#include <bits/stdc++.h>
#define rep(i, n) for (int(i) = 0; (i) < (n); (i)++)
using namespace std;

int main() {
    int N, L;
    cin >> N >> L;

    int R   = L + N - 1;
    int sum = (L + R) * N / 2;

    if (L >= 0)
        cout << sum - L << endl;
    if (L < 0 && R >= 0)
        cout << sum << endl;
    if (L < 0 && R < 0)
        cout << sum - R << endl;
}