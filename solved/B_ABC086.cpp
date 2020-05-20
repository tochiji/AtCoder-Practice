#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    string a,b;
    cin >> a >> b;
    string s = a+b;
    int k = stoi(s);
    for(int i=1;i*i<=k;++i){
        if(i*i==k){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}