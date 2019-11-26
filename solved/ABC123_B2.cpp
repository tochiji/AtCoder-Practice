#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main() {
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    auto maxt = [](int time) { return (time + 9) / 10 * 10; };
    auto delt = [&maxt](int time) { return maxt(time) - time; };
    int allsum = maxt(a) + maxt(b) + maxt(c) + maxt(e) + maxt(d);
    int del = max({delt(a),delt(b),delt(c),delt(d),delt(e)});
    cout << allsum - del << endl;
}