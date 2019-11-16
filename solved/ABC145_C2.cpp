#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

double distance(double x1, double x2, double y1, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    int N;
    cin >> N;
    vector<int> x(N);
    vector<int> y(N);
    rep(i, N) {
        double X, Y;
        cin >> X >> Y;
        x[i] = X;
        y[i] = Y;
    }

    double sum = 0;
    rep(a, N) rep(b, a) {
        sum += distance(x[a], x[b], y[a], y[b]);
    }

    printf("%.9f\n",sum * 2 / N);
}