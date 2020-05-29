#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).rbegin(), (x).rend()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

// 嘘解法っぽい
int main() {
    string s;
    int x, y;
    cin >> s >> x >> y;

    int forx       = true;
    bool firstTurn = true;
    vec<int> xs, ys;
    int nowF = 0;
    for (auto e : s) {
        if (firstTurn && e == 'F')
            --x;
        else if (e == 'T') {
            firstTurn = false;
            if (nowF != 0 && forx)
                xs.push_back(nowF);
            else if (nowF != 0 && !forx)
                ys.push_back(nowF);
            forx = !forx;
            nowF = 0;
        } else
            ++nowF;
    }
    if (nowF != 0 && forx)
        xs.push_back(nowF);
    else if (nowF != 0 && !forx)
        ys.push_back(nowF);

    sort(all(xs));
    sort(all(ys));

    for (auto e : xs) {
        if (x >= 0)
            x -= e;
        else
            x += e;
    }

    for (auto e : ys) {
        if (y >= 0)
            y -= e;
        else
            y += e;
    }

    if (x == 0 && y == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}