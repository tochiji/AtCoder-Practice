#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N;
    string S;
    cin >> N >> S;
    string A = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(auto e:S){
        int n = e-'A';
        cout << A[(n+N)%26];
    }
    cout << endl;
}