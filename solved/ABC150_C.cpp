#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> P(N);
    vector<int> Q(N);
    rep(i, N) cin >> P[i];
    rep(i, N) cin >> Q[i];
    vector<int> A(N);
    copy(all(P), A.begin());
    sort(all(A));

    int i = 0;
    int a;
    int b;
    do {
        i++;
        if (equal(P.cbegin(), P.cend(), A.cbegin())) a = i;
        if (equal(Q.cbegin(), Q.cend(), A.cbegin())) b = i;
    } while (next_permutation(A.begin(), A.end()));

    cout << abs(a - b) << endl;
}