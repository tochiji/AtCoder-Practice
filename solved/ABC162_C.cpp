#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int main() {
    int K;
    cin >> K;
    int ans = 0;
    for(int a=1;a<=K;++a)for(int b=1;b<=K;++b)for(int c=1;c<=K;++c){
        ans+=gcd(a,gcd(b,c));
    }
    cout << ans << endl;
}
