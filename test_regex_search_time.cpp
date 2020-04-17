#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;

chrono::system_clock::time_point start_t, end_t;

int main() {

    // 28文字で、10^5回regex回す場合
    // だいたい1.4秒程度
    string S = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    smatch smatch;

    start_t = chrono::system_clock::now();
    int ans = 0;
    for (int i = 0; i < 1e5; ++i) {
        bool A = regex_search(S, smatch, regex("^ABC"));
        ans += A;
    }
    end_t = chrono::system_clock::now();

    double time = static_cast<double>(
        chrono::duration_cast<chrono::microseconds>(end_t - start_t).count()
        / 1000.0);
    printf("time %lf[ms]\n", time);

    // 2800文字で、10^5回regex回す場合
    // だいたい1.5秒程度
    string S2 = "";
    rep(i, 100) S2 += S;

    start_t  = chrono::system_clock::now();
    int ans2 = 0;
    for (int i = 0; i < 1e5; ++i) {
        bool A = regex_search(S, smatch, regex("^ABC"));
        ans2 += A;
    }
    end_t = chrono::system_clock::now();
    time  = static_cast<double>(
        chrono::duration_cast<chrono::microseconds>(end_t - start_t).count()
        / 1000.0);
    printf("time %lf[ms]\n", time);


    // regex("XXXXXXX")の、判定文字の長さで速度が変わる気がする。
    // 文字列自体の長さはあまり関係なさそう。
    // いずれにせよ、10^5回regexを回すのはきつい。
    // 事前にメモ化等しておく必要がある。
}