#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    vec<int> A = {3,1,4,1,5,9,2};
    vec<int> B = A;
    for(auto e:B) cout << e << endl;
}