#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using namespace std;

int main() {
    ll A;
    string B;
    // cin >> A >> B;

    A = 1000000000;
    B = "0.29";

    string B1 = "";    // 整数部
    string B2 = "";    // 小数部

    bool beforeP = true;
    for (auto e : B) {
        if (e == '.') {
            beforeP = false;
            continue;
        }
        if (beforeP) B1 += e;    // 小数点より前
        else
            B2 += e;    // 小数点より後
    }

    cout << B1 << " " << B2 << endl;
    ll B100 = stol(B1) * 100 + stol(B2);    // 整数変換
    cout << A * B100 / 100 << endl;
}
