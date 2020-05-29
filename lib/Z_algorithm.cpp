#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

// Z-algorithm
// 最長共通部分文字列(LCP)を求める
// 「ababacaca」→「9 0 3 0 1 0 1 0 1」
// 計算量 O(S.size())
vec<int> Zalgo(string S) {
    int N = S.size();
    vec<int> A(N);
    A[0]  = N;
    int i = 1, j = 0;
    while (i < S.size()) {
        printf("%d %d\n",i,j);
        while (i + j < N && S[j+i]==S[j])
            ++j;
        A[i] = j;
        printf("  %d\n",j);
        if (j == 0) {
            ++i;
        } else {
            int k = 1;
            while (i + k < N && k + A[k] < j){
                A[i + k] = A[k], ++k;
            }
            i += k, j -= k;
        }
    }
    return A;
}

int main() {
    string S;
    cin >> S;
    auto a = Zalgo(S);
    for (auto e : a)
        cout << e << " ";
    cout << endl;
}