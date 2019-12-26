#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

bitset<40> rec(ll N, bitset<40> ans) {
    if (N == 0) return ans;

    ll sum = 0;
    if (N > 0) {
        int i = 0;
        while (true) {
            ll p = pow(2, i);
            sum += p;
            if (sum >= N) {
                N -= p;
                break;
            }
            i += 2;
        }
        ans[i] = 1;
        return rec(N, ans);
    } else {
        int i = 1;
        while (true) {
            ll p = pow(-2, i);
            sum += p;
            if (sum <= N) {
                N -= p;
                break;
            }
            i += 2;
        }
        ans[i] = 1;
        return rec(N, ans);
    }
}

int main() {
    ll N;
    cin >> N;

    if (N == 0) {
        cout << 0 << endl;
        return 0;
    } else {
        string b = rec(N, 0).to_string();
        int top = b.find("1");
        cout << b.substr(top) << endl;
    }
}