#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int S,L,R;
    cin >> S >> L >> R;
    if(S<=L) cout << L << endl;
    else if(R<=S) cout << R << endl;
    else cout << S << endl; 
}