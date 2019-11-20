#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    int rans = 1;
    rep(i,N){
        int A; cin >> A;
        if(!(A&1)) rans *=2;
    }

    cout << pow(3,N) - rans << endl;
}