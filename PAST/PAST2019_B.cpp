#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    for (int i = 1; i < N; i++) {
        if (A[i] == A[i - 1])
            cout << "stay" << endl;
        else if (A[i] > A[i - 1])
            printf("up %d\n", A[i] - A[i - 1]);
        else
            printf("down %d\n", A[i - 1] - A[i]);
    }
}