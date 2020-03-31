#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    ll allwater = 0;
    rep(i,N) {
        cin >> A[i];
        allwater += A[i];
    }
    ll allround = 0;
    for(int i=0;i<N;i+=2) allround += A[i];
    ll X = allround - (allwater/2);
    X*=2;

    rep(i,N){
        cout << X << " ";
        X = (A[i] - (X/2))*2;
    }
    cout << endl;
}