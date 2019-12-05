#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i,N) cin >> A[i];
    int ans = A[0];

    auto gcd = [](int a, int b){
        while(1){
            swap(a,b);
            if(b == 0) return a;
            a%=b;
        }
    };

    rep(i,N){
        ans = gcd(ans,A[i]);
    }
    cout << ans << endl;
}