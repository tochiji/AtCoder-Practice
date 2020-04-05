#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    ll N,K;
    cin >> N >> K;
    cout << min(N%K,K-(N%K)) << endl;   
}
