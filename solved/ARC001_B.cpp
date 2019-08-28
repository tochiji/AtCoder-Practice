#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int cnt  = 0;
    int diff = abs(B - A);
    while (diff != 0) {
        int ap10 = diff + 10;
        int am10 = diff - 10;
        int ap5  = diff + 5;
        int am5  = diff - 5;
        int ap1  = diff + 1;
        int am1  = diff - 1;
        diff =
            min({abs(ap10), abs(am10), abs(ap5), abs(am5), abs(ap1), abs(am1)});
        cnt++;
    }
    cout << cnt << endl;
}