#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N;
    cin >> N;
    vec<string> S(N);
    rep(i, N) cin >> S[i];
    set<string> st;
    rep(i, N) st.insert(S[i]);
    cout << st.size() << endl;
}
