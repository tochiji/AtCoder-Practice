#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;
    string s1 = S.substr(0, K - 1);
    string s2 = S.substr(K - 1);
    if ((N - K) % 2 == 0) reverse(all(s1));
    cout << s2 + s1 << endl;
}