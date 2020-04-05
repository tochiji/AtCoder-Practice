#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    double sm = 0;
    rep(i, N) {
        cin >> A[i];
        sm += A[i];
    }
    double bd = sm/(4*M);
    int m = 0;
    rep(i,N){
        if(A[i] < bd) continue;
        else ++m;
    }
    cout << ((M<=m)?"Yes":"No") << endl;
}
