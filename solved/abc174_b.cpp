#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using namespace std;
template <typename T> using vec = std::vector<T>;

double distance(double x1, double x2, double y1, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    int N;
    double D;
    cin >> N >> D;
    
    int ans = 0;
    rep(i, N) {
        double X,Y;
        cin >> X >> Y;
        if(distance(0,X,0,Y) <=D) ++ ans;
    }
    cout << ans << endl;

}
