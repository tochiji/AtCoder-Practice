#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int K;
    string S;
    cin >> K >> S;
    int N = min((int)S.size(),K);
    for(int i=0;i<N;++i){
        cout << S[i];
    }
    if(S.size()>N){
        cout << "...";
    }
    cout << endl;
}
