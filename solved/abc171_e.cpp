#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;
    
    vec<int> a(N);
    int x = 0;
    rep(i, N) {
        cin >> a[i];
        x^=a[i];
    }
    rep(i,N){
        int k = x^a[i];
        cout << k << " ";
    }
    cout << endl;
}