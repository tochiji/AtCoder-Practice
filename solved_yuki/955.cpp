#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using ld = long double;
using namespace std;
template <typename T> using vec = std::vector<T>;

int main() {
    ll a, b, c;
    cin >> a >> b >> c;
    if(!a&&!b&&!c){
        cout << -1 << endl;
        return 0;
    } else if(!a&&!b){
        cout << 0 << endl;
        return 0;
    } else if(!a){
        cout << 1 << endl;
        long double ans = (ld)-c/(ld)b;
        cout << fixed << setprecision(15);
        cout << ans << endl;
        return 0;
    }

    ll D = b * b - 4 * a * c;
    ld dd = (ld)b * (ld)b - (ld)4 * (ld)a * (ld)c;
    if (D > 0) {
        cout << 2 << endl;
        if(-b>0){
            long double ans1 = ((ld)-b+sqrtl(dd))/((ld)2*a);
            long double ans2 = ((ld)c/(ld)a)/(ld)ans1;
            cout << fixed << setprecision(16);
            cout << (ans1>=ans2?ans2:ans1) << endl;
            cout << (ans1>=ans2?ans1:ans2) << endl;
        } else {
            long double ans1 = ((ld)-b-sqrtl(dd))/((ld)2*a);
            long double ans2 = ((ld)c/(ld)a)/(ld)ans1;
            cout << fixed << setprecision(16);
            cout << (ans1>=ans2?ans2:ans1) << endl;
            cout << (ans1>=ans2?ans1:ans2) << endl;
        }
    } else if (D == 0) {
        cout << 1 << endl;
        long double ans = -(ld)b/((ld)2*a);
        cout << fixed << setprecision(15);
        cout << ans << endl;
    } else {
        cout << 0 << endl;
    }
}