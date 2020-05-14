#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N,A;
    cin >> N >> A;
    if(N%500 <=A){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
}