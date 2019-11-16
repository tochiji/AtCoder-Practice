#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

struct P {
    double x;
    double y;
};

int main() {
    int N;
    cin >> N;
    vector<P> t(N);
    rep(i, N) {
        double x, y;
        cin >> x >> y;
        t[i] = {x, y};
    }

    vector<int> v(N);
    double sums;
    iota(v.begin(), v.end(), 0);
    do {
        double sum = 0.0;
        rep(i, N - 1) {
            int x1   = v[i];
            int x2   = v[i + 1];
            double d = sqrt((t[x1].x - t[x2].x) * (t[x1].x - t[x2].x)
                            + (t[x1].y - t[x2].y) * (t[x1].y - t[x2].y));
            sum += d;
        }
        sums += sum;
    } while (next_permutation(v.begin(), v.end()));

    int kaizyou = 1;
    for (int i = 1; i <= N; i++)
        kaizyou = kaizyou * i;

    cout << fixed << setprecision(9);
    cout << sums / kaizyou << endl;
}