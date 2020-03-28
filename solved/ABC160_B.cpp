#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int X;
    cin >> X;
    int ans = 0;
    ans += 1000*(X/500);
    X = X%500;
    ans += (X/5)*5;
    cout << ans << endl;
    
}
