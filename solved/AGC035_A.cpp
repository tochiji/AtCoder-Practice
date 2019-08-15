#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int N;
vector<ll> a;

int main() {
    cin >> N;
    a.resize(N);
    map<int, int> cnt;

    rep(i, N) {
        cin >> a[i];
        cnt[a[i]] += 1;
    }

    if (cnt.count(0) == 1) {
        if (cnt[0] == N) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    if (N % 3 != 0) {
        cout << "No" << endl;
        return 0;
    }

    if (cnt.size() == 3) {
        int xor3 = 0;
        for (auto &e : cnt) {
            if (e.second != N / 3) {
                cout << "No" << endl;
                return 0;
            }
            xor3 = xor3 ^ e.first;
        }
        if (xor3 == 0) {
            cout << "Yes" << endl;
            return 0;
        }
        else {
            cout << "No" << endl;
            return 0;
        }
    }

    if (cnt.size() == 2) {
        if (cnt.count(0) == 0) {
            cout << "No" << endl;
            return 0;
        }

        for (auto &e : cnt) {
            if (e.first == 0) {
                if (e.second != N / 3) {
                    cout << "No" << endl;
                    return 0;
                }
            }
            else {
                if (e.second != 2 * N / 3) {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
}