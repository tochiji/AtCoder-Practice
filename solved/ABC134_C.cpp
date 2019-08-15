#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    rep(i, N) cin >> A[i];
    copy(A.begin(), A.end(), B.begin());
    sort(B.rbegin(), B.rend());
    int Max       = B[0];
    int MaxCount  = 0;
    int secondMax = 0;

    rep(i, N) {
        if (B[i] == Max) {
            MaxCount += 1;
            continue;
        }
        else
            secondMax = B[i];
        break;
    }

    rep(i, N) {
        if (MaxCount >= 2){
          cout << Max << endl;
        } else if(MaxCount == 1 && A[i] == Max){
          cout << secondMax << endl;
        } else {
          cout << Max << endl;
        }
    }
}