#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

int N;
vec<int> x, y;
    double ans = 0;
    ll cnt     = 0;

double distance(double x1, double x2, double y1, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    return sqrt(dx * dx + dy * dy);
}

void dfs(string s) {
    if (s.size() == N) {
        cnt++;
        rep(i, N - 1) {
            ans += distance(x[s[i] - '0'], x[s[i + 1] - '0'], y[s[i] - '0'],
                            y[s[i + 1] - '0']);
        }
        return;
    }

    rep(i, N) {
        bool flag = true;
        for (auto e : s)
            if (e == (i + '0')) flag = false;
        if (!flag) continue;
        s += to_string(i);
        dfs(s);
        s.pop_back();
    }
};



int main() {
    cin >> N;
    x.resize(N);
    y.resize(N);

    rep(i, N) {
        cin >> x[i] >> y[i];
        --x[i], --y[i];
    }

    dfs("");
    cout << fixed << setprecision(15);
    cout << ans / cnt << endl;
}