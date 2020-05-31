#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

int main() {
    int N = 10;

    int ans = 0;

    // 0b0000000000~0b1111111111までの全列挙
    rep(i, 1 << N) {
        int tmpans = 0;
        rep(j, N) {
            // j桁目に1が立ってなければcontinue
            if (!(i & 1 << j)) continue;
            tmpans += 1;
        }
    }

    int allcount        = 0;
    int notdouble1count = 0;

    // 0b0000000000~0b1111111111までのうち、
    // 1が横並びに2つ存在するようなiはスキップする。
    // あみだくじに線を引く場合など。
    rep(i, 1 << N) {
        ++allcount;
        bool flag = true;
        for (int j = 1; j <= N - 1; ++j) {
            bool a = (i >> j) & 1;
            bool b = (i >> (j - 1)) & 1;
            if (a && b) flag = false;
        }
        if (!flag) continue;
        ++notdouble1count;

        rep(j, N) {
            if (!((i >> j) & 1)) continue;
            // j桁目のbitに1が立っている場合のみ処理
        }
    }
    cout << allcount << endl;
    cout << notdouble1count << endl;
}