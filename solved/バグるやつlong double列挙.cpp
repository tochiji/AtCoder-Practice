#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

// 0.00〜9.99まで、1000行書かれたファイルを別途用意して読み込む

int main() {
    int ans = 0;
    rep(i, 1000) {
        long double B;
        cin >> B;
        int Bx100 = B * 100;
        if (Bx100 != i) {
            ++ans;
             printf("%.2Lf x100→ %d\n", B, Bx100); 
        }
    }
    cout << ans << endl;
}


