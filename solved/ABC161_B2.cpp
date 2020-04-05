#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    rep(i,N) cin >> A[i];
    int sum = accumulate(all(A),0);
    int ans = 0;
    rep(i,N){
        int a = A[i];
        if(a*M*4>=sum) ++ans;
    }
    cout << ((ans>=M)?"Yes":"No") << endl;
}
