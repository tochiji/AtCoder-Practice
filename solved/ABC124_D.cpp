#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;

    vector<int> Rs(1);

    if (S[0] == '1')
        Rs[0] = 0;
    else
        Rs.push_back(0);

    int before = (int)S[0];

    rep(i, N) {
        int s = (int)S[i];
        if (s != before) {
            Rs.push_back(0);
        }
        Rs[Rs.size() - 1]++;
        before = s;
    }
    if (S.back() == '0') Rs.push_back(0);

    vector<int> sums(Rs.size() + 1, 0);
    rep(i, Rs.size()) sums[i + 1] = sums[i] + Rs[i];

    int mx = 0;
    for (int i = 2 * K + 1; i < sums.size(); i += 2) {
        mx = max(mx, sums[i] - sums[i - 2 * K - 1]);
    }
    if (2 * K + 1 >= sums.size()) {
        mx = sums[sums.size() - 1];
    }

    cout << mx << endl;
}