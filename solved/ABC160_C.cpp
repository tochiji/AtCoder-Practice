#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int K,N;
    cin >> K >> N;
    vector<int> A(N);
    rep(i,N) cin >> A[i];
    int distmx = 0;
    rep(i,N-1){
        distmx = max(distmx,A[i+1]-A[i]);
    }
    distmx = max(distmx,A[0] + (K- A[N-1]));
    cout << K - distmx << endl;
}
