#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T>
using vec = std::vector<T>;

struct P {
    int a;
    int b;

    bool operator<(const P &another) const {
        if (b == another.b)
            return a > another.a;
        else
            return b < another.b;
    };
};

template <typename T>
struct BIT {
    int n;
    vector<T> d;
    BIT(int n = 0) : n(n), d(n + 1) {
    }
    void add(int i, T x = 1) {
        for (i++; i <= n; i += i & -i) {
            d[i] += x;
        }
    }
    T sum(int i) {
        T x = 0;
        for (i++; i; i -= i & -i) {
            x += d[i];
        }
        return x;
    }
};

int main() {
    int N;
    cin >> N;
    vec<P> p(N);
    rep(i, N) cin >> p[i].a >> p[i].b;
    sort(all(p));
    vec<int> w(N);
    rep(i, N) w[i] = p[i].a;

    vec<int> LIS;
    for (auto e : w) {
        if (LIS.size() == 0) {
            LIS.push_back(e);
        } else {
            int index = lower_bound(all(LIS), e) - LIS.begin();
            if (index == LIS.size())
                LIS.push_back(e);
            else
                LIS[index] = e;
        }
    }
    cout << LIS.size() << endl;
}