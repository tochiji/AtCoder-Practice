#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    string S,T;
    cin >> S >> T;
    if(S.size() +1 != T.size()){
            cout << "No" << endl;
            return 0;
    }
    rep(i,S.size()){
        if(S[i] != T[i]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
