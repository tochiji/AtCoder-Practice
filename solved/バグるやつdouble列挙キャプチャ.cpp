#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

// 0.00〜9.99まで、1000行書かれたファイルを別途用意して読み込む

int main() {
    rep(i, 1000) {
        double B;
        cin >> B;
        int Bx100 = B * 100;
    
        printf("%.2f x100→ %d\n", B, Bx100); 
    }
}


