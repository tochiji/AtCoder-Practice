#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repi(i, n) for (int i = 0; i <= (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    vector<int> A(3);
    cin >> A[0] >> A[1] >> A[2];
    sort(all(A));
    cout << (A[1] - A[0]) + (A[2]-A[1]) << endl; 
}