#include <atcoder/all>
#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rrep(i, n) for (ll i = (n); i >= 0; i--)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
using namespace atcoder;
template <typename T> using vec   = std::vector<T>;
template <typename T> using vvec  = std::vector<vector<T>>;
template <typename T> using vvvec = std::vector<vector<vector<T>>>;
template <class T> void chmax(T &a, T b) { (a < b) && (a = b); }
template <class T> void chmin(T &a, T b) { (a > b) && (a = b); }
template <class T> void printv(vec<T> a) {
    for (auto e : a)
        cout << e << " ";
    cout << '\n';
}
template <class T> void printvv(vvec<T> a) {
    for (auto e : a)
        printv(e);
}

using mint = modint1000000007;
ostream &operator<<(ostream &os, const mint &a) { return os << a.val(); }


int main() {
    //#INPUT

}
