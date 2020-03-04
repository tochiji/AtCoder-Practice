#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int N;
    cin >> N;
    rep(i,N+1){
        if(N == (int)(i*1.08)){
            cout << i << endl;
            return 0;
        }
    }
    cout << ":(" << endl;
}